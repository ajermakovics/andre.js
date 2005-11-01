%{
	// globals 
	int syn_start_pos, syn_end_pos; 
	int StateBeforePhp;
	string CurHeredoc;
	TextEditor* cur_ed;
			
 	int syn_swallow_comments();
	
	#define YY_DECL char syn_lex( TextEditor* e, int *tok_len )
	
	#define YY_INPUT(buf,result,max_size) \
  { \
		int c; \
		if(syn_start_pos > syn_end_pos) \
		{ \
			result = YY_NULL; \
			buf[0] = EOF; \
		} \
		else \
		{ \
		 c = cur_ed->TextBuf->character(syn_start_pos); \
		 syn_start_pos++; \
     result = (c == EOF) ? YY_NULL : (buf[0] = c, 1); \
		} \
  }
	/*
	// token types
	#define T_BLANK	'A'
	#define T_VARIABLE 'B'
	#define T_STRING 'C'
	#define T_NUMBER 'D'
	#define T_SYMBOL 'E'
	#define T_COMMENT 'F'
	#define T_ID 'G'
	#define T_KEYWORD 'H'
	#define T_HIGHLIGHT 'I'
	#define T_ERROR 'J'
	#define T_HTML_SYM 'K'
	#define T_HTML_ID 'L'
	#define T_HTML_STR 'M'
	#define T_HTML_TXT 'N'
	#define T_HTML_CMNT 'O'
	*/
%}
%option noyylineno
%option noyywrap

%x STR SSTR HTML HTML_TAG HTML_SQSTR HTML_DQSTR HTML_CMNT HEREDOC

LETTER		[a-zA-Z\x7f-\xff]
DIGIT			[0-9]
ID				({LETTER}|_)({LETTER}|{DIGIT}|_)*
VARIABLE	"$"+{ID}
WS				[ \t\f]
BLANKS		{WS}+
NEWLINE		("\r\n"|"\n")
DQSTR			["]([^"]|"\\\\"|"\\\"")*["]
SQSTR			[']("\\\\"|"\\'"|[^'])*[']
HSTR_ST		"<<<"{WS}*
LNUM{DIGIT}+
DNUM(({DIGIT}*[\.]{LNUM})|({LNUM}[\.]{DIGIT}*))
EXP_DNUM 	(({LNUM}|{DNUM})[eE][\+\-]?{LNUM})
HNUM			"0x"[0-9a-fA-F]+
TOKEN_CH	[{}()\[\];,]
COMMENT		("//"|"#")[^\n]*
COMMENTS	"/*"
SOME_CHAR (.|\n)
PHP_START "<?"
PHP_END		"?>"
%%

<HTML>{PHP_START}						StateBeforePhp = HTML; BEGIN(INITIAL); *tok_len = strlen(yytext); return T_SYMBOL;
<HTML>"<"										BEGIN(HTML_TAG); *tok_len = strlen(yytext); return T_HTML_SYM;
<HTML_TAG>{PHP_START}				StateBeforePhp=HTML_TAG; BEGIN(INITIAL); *tok_len = strlen(yytext); return T_SYMBOL;
<HTML_TAG>[=/]							*tok_len = strlen(yytext); return T_HTML_SYM;
<HTML_TAG>">"								BEGIN(HTML); *tok_len = strlen(yytext); return T_HTML_SYM;
<HTML_TAG>{ID}							*tok_len = strlen(yytext); return T_HTML_ID;

<HTML_TAG>[']								BEGIN(HTML_SQSTR); *tok_len = strlen(yytext); return T_HTML_STR;
<HTML_SQSTR>{PHP_START}			StateBeforePhp=HTML_SQSTR; BEGIN(INITIAL); *tok_len = strlen(yytext);return T_SYMBOL;
<HTML_SQSTR>[^']						*tok_len = strlen(yytext); return T_HTML_STR;
<HTML_SQSTR>[']							BEGIN(HTML_TAG); *tok_len = strlen(yytext); return T_HTML_STR;

<HTML_TAG>["]								BEGIN(HTML_DQSTR); *tok_len = strlen(yytext); return T_HTML_STR;
<HTML_DQSTR>{PHP_START}			StateBeforePhp = HTML_DQSTR; BEGIN(INITIAL); *tok_len = strlen(yytext); return T_SYMBOL;
<HTML_DQSTR>[^"]						*tok_len = strlen(yytext); return T_HTML_STR;
<HTML_DQSTR>["]							BEGIN(HTML_TAG); *tok_len = strlen(yytext); return T_HTML_STR;

<HTML>"<!--"								BEGIN(HTML_CMNT); *tok_len = strlen(yytext); return T_HTML_CMNT;
<HTML_CMNT>{PHP_START}			StateBeforePhp=HTML_CMNT; BEGIN(INITIAL); *tok_len = strlen(yytext); return T_SYMBOL; 
<HTML_CMNT>"-->"						BEGIN(HTML); *tok_len = strlen(yytext); return T_HTML_CMNT;
<HTML_CMNT>{SOME_CHAR}			*tok_len = strlen(yytext); return T_HTML_CMNT;

<HTML_TAG>{SOME_CHAR}				*tok_len = strlen(yytext); return T_HTML_TXT;
<HTML>{SOME_CHAR}						*tok_len = strlen(yytext); return T_HTML_TXT;
<INITIAL>{PHP_END}					BEGIN(StateBeforePhp); *tok_len = strlen(yytext); return T_SYMBOL;

<INITIAL>{HSTR_ST}					BEGIN(HEREDOC); CurHeredoc=""; *tok_len = strlen(yytext); return T_SYMBOL;
<HEREDOC>{ID}								*tok_len = strlen(yytext); if(CurHeredoc.empty()) {CurHeredoc = yytext;return T_ID;} else return T_STRING;
<HEREDOC>\n{ID}							*tok_len = strlen(yytext); if("\n" + CurHeredoc == yytext) {BEGIN(INITIAL);return T_ID;} else return T_STRING;
<HEREDOC>{VARIABLE}					*tok_len = strlen(yytext); return T_VARIABLE; 
<HEREDOC>"\\$"							*tok_len = strlen(yytext); return T_STRING; 
<HEREDOC>{SOME_CHAR}				*tok_len = strlen(yytext); return T_STRING;

<INITIAL>("and"|"argv"|"as"|"argc"|"break"|"case"|"cfunction"|"class"|"continue"|"declare"|"default"|"do"|"die"|"echo"|"else"|"elseif"|"enddeclare"|"end"|"for"|"endforeach"|"endif"|"endswitch"|"endwhile"|"eval"|"exit"|"extends"|"for"|"foreach"|"function"|"global"|"if"|"include"|"include_once"|"list"|"new"|"not"|"null"|"or"|"parent"|"php"|"print"|"require"|"require_once"|"return"|"static"|"switch"|"stdclass"|"var"|"xor"|"virtual"|"while") *tok_len = strlen(yytext); return T_KEYWORD;
<INITIAL>{COMMENT}					*tok_len = strlen(yytext); return T_COMMENT;
<INITIAL>{COMMENTS}					*tok_len = strlen(yytext) + syn_swallow_comments();  return T_COMMENT;
<INITIAL>{WS}								*tok_len = strlen(yytext); return T_BLANK;
<INITIAL>{NEWLINE}					*tok_len = strlen(yytext); return T_BLANK;
<INITIAL>{DIGIT}+						*tok_len = strlen(yytext); return T_NUMBER;
<INITIAL>{DNUM}							*tok_len = strlen(yytext); return T_NUMBER;
<INITIAL>{HNUM}							*tok_len = strlen(yytext); return T_NUMBER;
<INITIAL>{EXP_DNUM}					*tok_len = strlen(yytext); return T_NUMBER;
<INITIAL>{ID}								*tok_len = strlen(yytext); return T_ID;
<INITIAL>{VARIABLE}					*tok_len = strlen(yytext); return T_VARIABLE;
<INITIAL>["]								*tok_len = strlen(yytext); BEGIN(STR); return T_STRING; 
<STR>{VARIABLE}							*tok_len = strlen(yytext); return T_VARIABLE; 
<STR>("\\$"|"\\\\"|"\\\""|[^"]) 	*tok_len = strlen(yytext); return T_STRING; 
<STR>["]										*tok_len = strlen(yytext); BEGIN(INITIAL); return T_STRING;
<INITIAL>"'"								*tok_len = strlen(yytext); BEGIN(SSTR); return T_STRING;
<SSTR>("\\\\"|"\\'"|[^'])		*tok_len = strlen(yytext); return T_STRING; 
<SSTR>"'"										*tok_len = strlen(yytext); BEGIN(INITIAL); return T_STRING;
<INITIAL>"=>"								*tok_len = strlen(yytext); return T_SYMBOL;
<INITIAL>"->"								*tok_len = strlen(yytext); return T_SYMBOL;
<INITIAL>"::"								*tok_len = strlen(yytext); return T_SYMBOL;
<INITIAL>{SOME_CHAR}				*tok_len = strlen(yytext); return T_SYMBOL;

%%
//######################################################################
//######################################################################
int get_next_char(int *ch)
{
	char buf[1];
 	int result;

	YY_INPUT(buf, result, 1);
	
	*ch = buf[0];
	
	return buf[0];
}
//-----------------------------------------------------------------------
int syn_swallow_comments()
{
// read input until '*/'
// return number of chars

	int count=0;
	char prev_char = 0;
	int c;

	while( get_next_char(&c) != EOF)
	{
		count++;
	
		if(c == '/' && prev_char == '*')
			break;
		
		prev_char = c;
	}
	
	return count;
}
//-----------------------------------------------------------------------
/*
int main()
{
	char t;
	int tok_len = 0;
	
	while( ( t=syn_lex(&tok_len) ) != 0)
	{
		printf("Token: %c, len: %d, '%s' \n", t, tok_len, yytext);
	}
}
*/
//-----------------------------------------------------------------------
