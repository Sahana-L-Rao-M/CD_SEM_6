run:
	bison -dy parser.y
	flex lex.l
	gcc lex.yy.c y.tab.c
	
clean:
	rm a.out lex.yy.c y.tab.c y.tab.h

