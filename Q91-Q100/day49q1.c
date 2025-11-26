//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    gets(name);

    printf("Initials: ");
    printf("%c", name[0]); // first letter

    for(i = 1; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            printf(".%c", name[i + 1]);
    }

    printf("\n");
    return 0;
}
