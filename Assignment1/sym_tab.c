#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sym_tab.h"

table* init_table()
{
	table* t = (table*)malloc(sizeof(table));
	t->head = NULL;
	return t;
}

symbol* init_symbol(char* name, int size, int type, int lineno,int scope)
{
	symbol* s = (symbol*)malloc(sizeof(symbol));
	s->name = (char*)malloc(sizeof(char)*(strlen(name)+1));
	strcpy(s->name,name);
	s->len = size;
	s->type = type;
	s->line = lineno;
	s->scope = scope;
	s->val=(char*)malloc(sizeof(char)*10);
	strcpy(s->val,"~");
	s->next = NULL;
	return s;
}

void insert_symbol(char* name, int size, int type, int lineno,int scope)
{
	//printf("insert %s being called\n",name);
	symbol* s = init_symbol(name, size, type, lineno,scope);
	if(t->head == NULL)
	{
		t->head = s;
		return;
	}
	symbol* curr = t->head;
	while(curr->next!=NULL)	
	{
		curr = curr->next;
	}
	curr->next = s;
}


void insert_val(char* name, char* v, int line)
{
	//printf("insert val %s being called\n",v);
	if(v=="~")
		return;
	if(t->head == NULL)
	{
		return;
	}
	symbol* curr = t->head;
	while(curr!=NULL)
	{
		if(strcmp(curr->name,name)==0)
		{
			strcpy(curr->val,v);
			curr->line=line;
			return;
		}	
		curr = curr->next;
	}
}

char* retrieve_val(char* name)
{
	char* val="~";
	if(t->head == NULL)
	{
		return val;
	}
	symbol* curr = t->head;
	while(curr!=NULL)
	{
		if(strcmp(curr->name,name)==0)
		{
			val=curr->val;
			return val;
		}	
		curr = curr->next;
	}
	return val;
}

int retrieve_type(char* name)
{
	int type=-1;
	if(t->head == NULL)
	{
		return type;
	}
	symbol* curr = t->head;
	while(curr!=NULL)
	{
		if(strcmp(curr->name,name)==0)
		{
			type=curr->type;
			return type;
		}	
		curr = curr->next;
	}
	return type;
}

int check_sym_tab(char* name)
{
	if(t->head == NULL)		
	{
		return 0;
	}
	symbol* curr = t->head;
	while(curr!=NULL)
	{
		if(strcmp(curr->name,name)==0)
		{
			//printf("Variable %s is declared\n",name);
			return 1;
		}
		curr = curr->next;
	}
	//printf("Variable %s not declared\n",name);
	return 0;
}

int type_check(char* value)
{
	char *s=strchr(value,'\"');
	if(s!=NULL)
		return 1; 
	char *f=strchr(value,'.');
	if(f!=NULL)
		return 3;
	return 2;
}

int size(int type)
{	
	if(type==2)
		return 4;
	if(type==3)
		return 4;
	if(type==4)
		return 8;
	return type;
}

void display_symbol_table()
{
    symbol* sym = t->head;
	if(sym == NULL)
	{
		printf("Empty Symbol Table");
		exit(0);
	}
	printf("Name      Size      Type      Lineno    Scope     Value\n");
	while(sym != NULL)
	{
		printf("%-10s%-10d%-10d%-10d%-10d%-10s\n", sym->name, sym->len, sym->type, sym->line, sym->scope, sym->val);
		sym = sym->next;
	}
	symbol *s1, *s2=NULL;
	s1 = t->head;
	while(s1->next != NULL)
	{
		s2 = s1;
		s1 = s1->next;
		free(s2);
	}
	free(t);
}
