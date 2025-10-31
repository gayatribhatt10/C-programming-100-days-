//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, freq[26] = {0};

    printf("Enter a lowercase string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if(freq[index] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
