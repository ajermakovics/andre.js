all: lex.yy.c parser.tab.c

lex.yy.c: lexer.l
	flex -L -i lexer.l

parser.tab.c: parser.y
	bison parser.y	
