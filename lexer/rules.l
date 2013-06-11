%{
#include <rules.h>
%}

%%

"function" 		return TOK_FUNC;
[a-zA-Z][a-zA-Z0-9]*	return TOK_VAR;
[1-9][0-9]*		return TOK_INT;
[ \t\n]			;

%%
int yywrap(void)
{
	return 1;
}
