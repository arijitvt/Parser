#ifndef LEXER_H__
#define LEXER_H__


#include <iostream>
#include <string>
using namespace std;

enum Token
{
	tok_eof = -1,
	tok_def = -2,
	tok_extern = -3,
	tok_identifier = -4,
	tok_number = -5
};

static string IdentifierString;
static double NumVal;

extern int get_token();
#endif
