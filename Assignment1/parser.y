%{
	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=-1;	//initial declaration of type for symbol table
	char* vval="~";	//initial declaration of value for symbol table
	int vtype=-1;	//initial declaration for type checking for symbol table
	int scope=0;	//initial declaration for scope
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	extern int yylineno; // track the line number
	extern char* yytext;
	int arrsize=1;
	int errCount=0;

%}
/* declare tokens */
%token T_INT T_CHAR T_DOUBLE T_WHILE  T_INC T_DEC   T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_PRINTLN T_STRING  T_FLOAT T_BOOLEAN T_IF T_ELSE T_STRLITERAL T_DO T_INCLUDE T_HEADER T_MAIN T_ID T_NUM T_FOR T_OR T_AND T_INCR T_DECR

/* specify start symbol */
%start START


%%
START : PROG ;


PROG : T_INCLUDE '<' T_HEADER '>' PROG
	| MAIN PROG
	| DECLR ';' PROG
	| ASSGN ';' PROG
	|
	;	  

FOR : T_FOR '(' DEC_ASGN';'T_ID REL_OP EXPR ';' EXPR')' '{'{scope++;} STMT '}';
	
DEC_ASGN : {printf(" ");} TYPE LISTVAR;

DECLR : TYPE LISTVAR 
	| TYPE ARRAY
	;

ARRAY : T_ID BRACKET {
		if(check_sym_tab($1))
			{
				printf("Already declared variable %s\n",$1);
				yyerror($1);
			}
			else
			{
				insert_symbol($1,size(type)*arrsize,type,yylineno,scope);
				arrsize=1;
				type=-1;
			}
		}
	;

BRACKET : '[' T_NUM ']' BRACKET { arrsize*=atoi($2);}
		| '[' T_ID ']' BRACKET { arrsize*=atoi($2);}
		|
	;
LISTVAR : LISTVAR ',' VAR 
	  | VAR
	  ;

VAR: T_ID '=' EXPR 	{
				if(check_sym_tab($1))
				{
					printf("Already declared variable %s\n",$1);
					yyerror($1);
				}
				else
				{
				insert_symbol($1,size(type),type,yylineno,scope);
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
				}
			}
     | T_ID 		{
				if(check_sym_tab($1))
				{
					printf("Already declared variable %s\n",$1);
					yyerror($1);
				}
				else{
				insert_symbol($1,size(type),type,yylineno,scope);
				type=-1;
				}
			}	 
	
TYPE : T_INT {type = INT;}
       | T_FLOAT {type = FLOAT;}
       | T_DOUBLE {type = DOUBLE;}
       | T_CHAR {type = CHAR;}
       ;
  
ASSGN : T_ID {type=retrieve_type($1);}'=' EXPR 	{
				//printf("%s here \n", $1);
				if(!check_sym_tab($1))
				{
					printf("Variable %s is not declared\n",$1);
					yyerror($1);
				}
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
			}
		|	T_ID BRACKET {type=retrieve_type($1);}'=' EXPR 	{
				if(!check_sym_tab($1))
				{
					printf("Variable %s is not declared\n",$1);
					yyerror($1);
				}
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
			}
	;

EXPR : EXPR REL_OP E  
       | E {vval=$1;}
       | EXPR LOGICAL_OP E
	| E UNARY_OP {
		int xyz = atoi(retrieve_val($1))+1;
	sprintf($$,"%d",xyz);}
	| UNARY_OP E {
		int xyz = atoi(retrieve_val($1))+1;
	sprintf($$,"%d",xyz);}
       ;
   
/* Expression Grammar */	   
E : E '+' T 	{ 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)+atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)+atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | E '-' T 	{ 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)-atoi($3)));
			else if(vtype==3)
				sprintf($$,"%lf",(atof($1)-atof($3)));			//float or double
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | T {$$=$1;}
    ;
	
	
T : T '*' F 	{ 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)*atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)*atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | T '/' F 	{ 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)/atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)/atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | F {$$=$1;}
    ;

F : '(' EXPR ')'
    | T_ID 	{
			if(check_sym_tab($1))		//check if variable is in symbol table
			{
				char* check=retrieve_val($1);
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",$1);
					yyerror($1);
				}
				else
				{	
					$$=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror($1);
					}	
				}
			}
		}
    | T_NUM 	{
    			$$=strdup($1); 
    			vtype=type_check($1);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror($1);
			}
		}
    | T_STRLITERAL {
    			$$=strdup($1); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror($1);
			}
		}
    ;

REL_OP :   T_LESSEREQ
	   | T_GREATEREQ
	   | '<' 
	   | '>' 
	   | T_EQCOMP
	   | T_NOTEQUAL
	   ;

UNARY_OP   : T_INCR 
	|T_DECR 
	|'-'
	|'+'
	|'!'
	;	

LOGICAL_OP :T_AND
	|T_OR
	|'!'
	;
	
UNARY_OP : T_INCR {
			int i = atoi(retrieve_val($1))+1;
			char arr[50];
			sprintf(arr, "%d", i);
			insert_val($$, arr, yylineno);
			vval = retrieve_val($$);
					
		}
	|T_DECR {
			int i = atoi(retrieve_val($1))+1;
			char arr[50];
			sprintf(arr, "%d", i);
			insert_val($$, arr, yylineno);
			vval = retrieve_val($$);
					
		}
	;
	


/* Grammar for main function */
MAIN : TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' {scope++;} STMT '}' {scope--;};

EMPTY_LISTVAR : LISTVAR
		|
		;

STMT : STMT_NO_BLOCK STMT
	| BLOCK {scope++;} STMT {scope--;}
	|
	;
	
%nonassoc T_IFX;
%nonassoc T_ELSE;

STMT_NO_BLOCK : DECLR ';'
	| ASSGN ';'
	| IFELSE STMT
	| WHILE STMT
	| FOR STMT
	| DO STMT
	| EXPR ';'
	| DEC_ASGN ';' 
	| error{yyerrok;yyclearin;}';'
	|
	;
IFELSE : T_IF '(' CONDITION ')' BLOCK
	| T_IF '(' CONDITION ')' BLOCK T_ELSE {scope--;} BLOCK
	|
	;
DO    : T_DO BLOCK WHILE
      ;
BLOCK : '{' {scope++;} STMT '}' {scope--;};

CONDITION : EXPR  
       | ASSGN
       ;

WHILE : T_WHILE '(' CONDITION ')' WHILE_2;

WHILE_2 : '{'{scope++;} STMT '}'{scope--;}
	| ';'
	;

%%

void yyerror(char* s)
{
	errCount+=1;
	printf("Error :%s at %d \n",s,yylineno);
}
int yywrap()
{
    return(1);
}


char *strdup(const char *str)
{
    int n = strlen(str) + 1;
    char *dup = malloc(n);
    if(dup)
    {
        strcpy(dup, str);
    }
    return dup;
}

/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	display_symbol_table();
	if(errCount > 0)
	{
		printf("Compilation failed at Syntax Analyser with a total of %d errors\n", errCount);	
	}
	else
	{
		printf("Compilation successful w.r.t. Syntax Analyser\n");
	}
	return 0;

}
