//Count frequency of a given character in a string
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);   // you can also use fgets(str, 100, stdin);

    // Input character to count
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    // Count occurrences
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    // Output result
    printf("Character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
