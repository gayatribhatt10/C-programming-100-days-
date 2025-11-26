/*Output pattern example:

*
*
*
*
*
*
*
*
*
**/
#include <stdio.h>

int main() {
    // Array for number of stars in each group
    int stars[] = {1, 2, 5, 3, 1};
    int i, j, k;

    // total number of groups
    int groups = 5;

    for(i = 0; i < groups; i++) {
        for(j = 0; j < stars[i]; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}
