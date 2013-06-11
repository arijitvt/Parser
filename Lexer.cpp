#include <Lexer.h>
#include <ctype.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int get_token() {
	static int last_char = ' ' ;
	while(isspace(last_char)) {
		last_char = getchar();
	}

	if(isalpha(last_char)) {
		while(isalnum(last_char=getchar())) {
			IdentifierString +=last_char;
		}
		if(IdentifierString == "def") {
			return tok_def;
		} else if(IdentifierString == "extern") {
			return tok_extern;
		}
		return tok_identifier;
			
	}else if(isdigit(last_char)) {
		string num_string;
		do {
			num_string += last_char;
			last_char = getchar();
		}while(isdigit(last_char));
		double d  = atof(num_string.c_str());
		return tok_number;
	}else if(last_char = EOF) {
		return tok_eof;
	}
	int this_char = last_char;
	return this_char;
}
