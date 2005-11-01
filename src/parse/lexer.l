%{
	int line_no;
	string CurJavaDoc;
	string HeredocName;
	int position;

 	//int yywrap()	{ 		return (1); /* no more files to read */ 	}
 	
 	int isatty(int fileno) { return 0; }
 	int swallow_comments();
 	int swallow_non_php();
	int get_javadoc();
	
// HSTR_ST		"<<<"{WS}*{ID}{NEWLINE}
%}
%option noyylineno
%option noyywrap

%x NON_PHP IN_JAVADOC IN_HSTR IN_SQSTR IN_DQSTR

LETTER		[a-zA-Z\x7f-\xff]
DIGIT			[0-9]
ID				({LETTER}|_)({LETTER}|{DIGIT}|_)*
VARIABLE	"$"+{ID}
WS				[ \t\f]
BLANKS		{WS}+
NEWLINE		("\r\n"|"\n")
DQSTR			["]([^"]|("\\\\")|("\\\""))*["]
SQSTR			[']([^']|("\\\\")|("\\\'"))*[']
HSTR_ST		"<<<"{WS}*
LNUM      {DIGIT}+
DNUM      (({DIGIT}*[\.]{LNUM})|({LNUM}[\.]{DIGIT}*))
EXP_DNUM 	(({LNUM}|{DNUM})[eE][\+\-]?{LNUM})
HNUM			"0x"[0-9a-fA-F]+
TOKEN_CH	[{}()\[\];,]
COMMENT		("//"|"#")[^\n]*
COMMENTS	"/*"
JAVADOCST "/**"
SOME_CHAR (.|\n|\r)
PHP_START "<?"(php)?
PHP_END		"?>"
%%

<NON_PHP>{SOME_CHAR}	swallow_non_php(); BEGIN(INITIAL);
{PHP_END}							BEGIN(NON_PHP); return ';';

php								/* just skip */
class							return CLASS;
extends						return EXTENDS;
new								return NEW;
function					return FUNCTION;
var								return VAR;
for								return FOR;
include						return INCLUDE;
include_once			return INCLUDE;
require						return INCLUDE;
require_once			return INCLUDE;
define						return DEFINE;

{JAVADOCST}							CurJavaDoc = ""; BEGIN(IN_JAVADOC);
<IN_JAVADOC>{NEWLINE}{WS}* line_no++; CurJavaDoc += "\n";
<IN_JAVADOC>[^*\n\r]+		CurJavaDoc += yytext;
<IN_JAVADOC>"*/"				BEGIN(INITIAL);
<IN_JAVADOC>"*"					CurJavaDoc += yytext;

{HSTR_ST}					BEGIN(IN_HSTR); HeredocName=""; return SOME_CHAR;
<IN_HSTR>{NEWLINE} line_no++; 
<IN_HSTR>{ID}			if(HeredocName.empty()) HeredocName = yytext; return DQSTR; 
<IN_HSTR>\n{ID}		if("\n"+HeredocName == yytext){BEGIN(INITIAL);} line_no++; return DQSTR;
<IN_HSTR>.				return DQSTR;

["]												BEGIN(IN_DQSTR); return DQSTR;
<IN_DQSTR>{NEWLINE}				line_no++;
<IN_DQSTR>[^"\n\r]				return DQSTR;
<IN_DQSTR>("\\\\"|"\\\"")	return DQSTR;
<IN_DQSTR>["]							BEGIN(INITIAL); return DQSTR;

[']												BEGIN(IN_SQSTR); return SQSTR;
<IN_SQSTR>{NEWLINE}				line_no++;
<IN_SQSTR>[^'\n\r]				return SQSTR;
<IN_SQSTR>("\\\\"|"\\'")	return SQSTR;
<IN_SQSTR>[']							BEGIN(INITIAL); return SQSTR;

{COMMENT}					/* swallow one line comments */
{COMMENTS}				swallow_comments(); /* multi-line comments */
{WS}							/* skip blanks and tabs */
{NEWLINE}					line_no++; 
{LNUM}						return LNUM;
{DNUM}						return DNUM;
{ID}							return ID;
{VARIABLE}				return VARIABLE;
{TOKEN_CH}				return yytext[0];
{SOME_CHAR}				if(yytext[0]=='\n') line_no++; return SOME_CHAR;
%%
//######################################################################
//######################################################################

int swallow_comments()
{
// read input until '*/'
	int c;
	while((c = yyinput()) != EOF)
	{
		if(c == '\n') line_no++;
	  else if(c == '*')
	  {
	    if((c = yyinput()) == '/') break;
	    else yyunput(c, yytext);
	  }
	}
	return c;
}
//-----------------------------------------------------------------------
int get_javadoc()
{
	int count=0;
	char prev_char = 0;
	int c;

	while( (c = yyinput()) != EOF)
	{
		count++;
		
		if(c == '\n') line_no++;
		else if(c == '/' && prev_char == '*')
			break;
		
		prev_char = c;
	}
	
	return count;
}
//-----------------------------------------------------------------------
int swallow_non_php()
{
// read input until '<?'
	int c;

	c = yytext[0];
	while(c != EOF)
	{
	  if(c == '\n') line_no++;
	  else if(c == '<')
	  {
	    if((c = yyinput()) == '?') 	break;
	    else yyunput(c, yytext);
	  }
		c = yyinput(); // read next char
	}
	return c;
}
//-----------------------------------------------------------------------
