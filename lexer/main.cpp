//C Libraries
#include <stdio.h>

//CPP Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

//Custom Libraries
#include <rules.h>

using namespace std;

extern int yylex();
extern int yylineno;
extern char* yytext;

char *token_list[] = {NULL,"function","variable","integer"};

int main() {
	int ntoken=yylex();
	while(ntoken) {
		cout<<"Token is "<<token_list[ntoken]<<endl;
		ntoken=yylex();
	}
	return 0;	
}
