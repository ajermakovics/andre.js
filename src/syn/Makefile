all: lex.syn.c 

lex.syn.c: syn_lexer.l
	flex -L -i -P syn syn_lexer.l

lex.syn: lex.syn.c
	c lex.syn.c

