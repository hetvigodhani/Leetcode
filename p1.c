#include <stdio.h>
#include <ctype.h>

void lexA(const char *input) {
    int i = 0;

    printf("\nTokens Found:\n");
    while (input[i] != '\0') {
        if (isalpha(input[i])) { 
            // words
            printf("WORD: ");
            while (isalpha(input[i])) {
                putchar(input[i]);
                i++;
            }
            printf("\n");
        } else if (isdigit(input[i])) {
            // numbers
            printf("NUMBER: ");
            while (isdigit(input[i])) {
                putchar(input[i]);
                i++;
            }
            printf("\n");
        } else if (isspace(input[i])) {
            // Skip spaces
            i++;
        } else {
            // special characters
            printf("SPECIAL CHARACTER: %c\n", input[i]);
            i++;
        }
    }
}

int main() {
    char input[1000];

    printf("Enter the input:\n");
    fgets(input, sizeof(input), stdin); 

    lexA(input);

    return 0;
}
