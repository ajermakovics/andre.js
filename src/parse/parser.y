%{
#include "SemanticValue.h"
#define YYSTYPE SemanticValue

#define YYINITDEPTH 1000
#define YYMAXDEPTH 500000

#include "parser.tab.h"
#include "lex.yy.c"

// void* parameter name to be passed to yyparse function
#define YYPARSE_PARAM params

// report error descriptions
#define YYERROR_VERBOSE

// %pure-parser , int yylex (YYSTYPE *lvalp, YYLTYPE *llocp) {  *lvalp = value; }

int yyerror(const char *s);
%}

%defines
%token_table
%no-lines

%token ID VARIABLE DQSTR SQSTR LNUM DNUM EXP_NUM HNUM SOME_CHAR
%token CLASS NEW FUNCTION VAR EXTENDS FOR INCLUDE DEFINE

%%

code : statement_list | /* empty */
;
statement_list : statement
          | statement statement_list
;
statement : expression ';'
					| class_decl											{ ((YyParams*)params)->CodeMan->AddClass($1.Cls);  }
					| function_decl										{ ((YyParams*)params)->CodeMan->AddGlobalFunction($1.Fn);  }
					| INCLUDE  inc_exp ';' 						{ ((YyParams*)params)->AddParseFile($2.Str);  }
					| DEFINE '(' expression ',' arg_list ')' ';' { ((YyParams*)params)->CodeMan->AddConstant($3.Str,
     																							((YyParams*)params)->FileName);
                            									 
                                     				}
					| expression '{' code '}'         { /* if, while , switch .. */ 	}
					| '{' code '}'										{ /* fn, for loop body, etc */		}
					| for_statement										{ /* special because of the ";"'s */ }
					| error ';'												{ yyerror("<stmt>");  /*				*/ }
;
inc_exp: '(' expression ')'									{ $$ = $2;	}
					| expression											{ $$ = $1;	}
;
variable : variable_name indices		{ $$ = $1 + $2;
																		((YyParams*)params)->CodeMan->AddGlobalVariable($1.Var);
																		((YyParams*)params)->CodeMan->GlobalVariables[$1.Var.Name].AddArrayKey($2.Str);
																		((YyParams*)params)->CodeMan->GlobalVariables[$1.Var.Name].LineNo = $1.Var.LineNo;
																		
																		 $$.Var.LineNo = $1.Var.LineNo;
																		}
;
variable_name : VARIABLE 							{	$$ = yytext;
																				$$.Var.Name = yytext;
																				$$.Var.LocationFile = ((YyParams*)params)->FileName;
																				
																				$$.Var.LineNo = line_no;
																				
																				((YyParams*)params)->LastVar = yytext;	
																			}
;
indices: index_lst										{ $$ = $1; 	}
					| /* empty */								{ $$ = ""; 			}
;
index_lst: index											{	$$ = $1 }
					|	index index_lst						{	$$ = $1 + $2; }
;
index :  		'[' expression ']'				{ $$ = "[" + $2 + "]"; 	}
					| '[' ']'										{ $$ = "[]"; 						}

;
class_decl : CLASS class_name extends '{' var_decl_list  fn_decl_list '}'
																			{
																				//printf("Class: '%s'\n", $2.Str.c_str() );
																				
																				$$.Cls.Name = $2.Str;
																				$$.Cls.BaseClassName = $3.Str;
																				$$.Cls.Variables = $5.VarMap;
																				$$.Cls.Functions = $6.FnMap;
																				$$.Cls.LocationFile = ((YyParams*)params)->FileName;
																				$$.Cls.LineNo = $2.LineNo;
																				$$.Cls.JavaDoc = CurJavaDoc;
																				CurJavaDoc = "";
																			}
;
class_name : ID  											{ $$ = yytext; 	
																				$$.LineNo = line_no; 
																				
																				//printf("Classname: '%s' in '%s'\n", yytext, ((YyParams*)params)->FileName.c_str() );
																			}
;
extends : EXTENDS ID									{ $$ = yytext;  			}
					| /* empty */								{ $$ = ""; 						}
;
var_decl_list : var_decl list_sep var_decl_list { $$.VarMap = $3.AddVar($1.Var);  }
     | /* empty */															{  								}
;
var_decl : VAR variable init_val 			{ $$.Var.Name = $2.Str;	
																				$$.Var.LineNo = $2.Var.LineNo;
																				$$.Var.JavaDoc = CurJavaDoc;
																				CurJavaDoc = "";
																			}
;
init_val : expression
					| /* empty */
;
list_sep : ';'												{ $$ = ";"; 	}
					| /* empty */								{ $$ = ""; 		}
;
fn_decl_list : function_decl fn_decl_list { $$.FnMap = $2.AddFn($1.Fn); }
					| /* empty */										{  							}
;
function_decl : FUNCTION ref function_name params statement 
																					{ 
                     												$$.Fn.Name = $3.Str;  
                                 						$$.Fn.Parameters = $4.StrVect;   
                                 						$$.Fn.LocationFile = ((YyParams*)params)->FileName;
                                 						$$.Fn.LineNo = $3.LineNo;
																						$$.Fn.JavaDoc = CurJavaDoc;
																						CurJavaDoc = "";
                      						        }
;
ref: SOME_CHAR											{	$$ = yytext[0];		}
			| /* empty */									{	$$ = "";			}
;
function_name : ID									{	$$ = yytext;
																			$$.LineNo = line_no; 
																			
																			//printf("Fn name: '%s'\n", yytext );
																		}
;
params : '(' ')'										{ /* returns an empty vector */ }
		| '(' param_list ')'						{ $$.StrVect = $2.StrVect; 			}
;
param_list : expression							{ $$.AppendStr($1.Str);  }
		| expression ',' param_list			{ $$.StrVect = $3.PrependStr($1.Str); }
;
args : '(' ')'											{ $$ = "()"; }
		| '(' arg_list ')'							{ $$ = "(" + $2 + ")"; }
;
arg_list : expression								{ $$ = $1;    }
		| expression ',' arg_list 			{ $$ = $1 + "," + $3; }
;
for_statement : FOR '(' expression ';' expression ';' expression ')' statement
;
expression : term										{ $$ = $1; }
					| term expression					{ $$ = $1 + $2; }
;
term : 			ID											{ $$ = yytext; }
					| variable								{ $$ = $1; 			}
					| scalar_value						{ $$ = yytext; }
					| NEW	ID									{ 
     																	$$ = "new "; $$ = $$ + yytext;	
     																	
   																		$$.Var.Name = ((YyParams*)params)->LastVar;
           														$$.Var.Type = yytext;
           														$$.Var.LocationFile = ((YyParams*)params)->FileName;
           														
           														((YyParams*)params)->CodeMan->AddGlobalVariable($$.Var);
                              			}
					| SOME_CHAR								{ $$ = yytext[0]; }
					| index_lst								{ $$ = $1; }	
					| args										{ $$ = $1; }
;
str : 		  DQSTR 									{ $$ = yytext; }
					| SQSTR										{ $$ = yytext; }
;
num : 		  LNUM  | DNUM | EXP_NUM | HNUM 
;
scalar_value : str | num
;
%%
//--------------------------------------------------------------------------
int yyerror(const char *s)  /* Called by yyparse on error */
{
  //printf ("[%d] Parse error: '%s' near '%s'\n", line_no, s, yytext);
	return 0;
}
//--------------------------------------------------------------------------

