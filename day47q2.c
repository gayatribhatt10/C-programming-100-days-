//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    // Check last word
    word[j] = '\0';
    if(strlen(word) > maxLen)
        strcpy(longest, word);

    printf("Longest word: %s\n", longest);
    return 0;
}
