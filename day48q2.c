//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; ; i++) {
        if(wordStart == NULL && str[i] != ' ' && str[i] != '\0')
            wordStart = &str[i];

        if((str[i] == ' ' || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
