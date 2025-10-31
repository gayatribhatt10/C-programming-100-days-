//Sum of the series 2/3 + 4/7 + 6/11 + 8/15 + … up to n terms//
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    float num = 2, den = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of series = %.2f", sum);
    return 0;
}