//Print initials of a name with surname in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    gets(name);

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    printf("Name format: ");
    printf("%c.", name[0]);

    for(i = 1; i < lastSpace; i++) {
        if(name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    printf(" %s\n", &name[lastSpace + 1]);
    return 0;
}
