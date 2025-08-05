#include <stdio.h>

int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c", &c);  // Added space before %c and used &c to read input correctly

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

}
