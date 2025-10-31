/*Print pattern
    5
   45
  345
 2345
12345*/
#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j < i; j++) {
            printf(" ");   // print spaces
        }
        for(j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
