//For a 3×3 matrix, this means printing elements on diagonals one by one.
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j || i + j == n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
