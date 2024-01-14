run:
	bison -dy parser_POSTORDER.y
	flex lexer.l
	gcc lex.yy.c y.tab.c
	
clean:
	rm a.out lex.yy.c y.tab.c y.tab.h
