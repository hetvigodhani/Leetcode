%{
#include <stdio.h>
%}

%%

[ \t\n]+    { printf(" "); }        // Replace extra spaces, tab and new line into one space
.           { printf("%s", yytext); } // Print all other as it is

%%

int main() {
    yylex(); // Start process input
    return 0;
}
