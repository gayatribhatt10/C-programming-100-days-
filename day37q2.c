//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int mat[r][c], trans[c][r];
    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose of matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
