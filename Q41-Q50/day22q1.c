//Sum of the series 1 + 3/4 + 5/6 + 7/8 + … up to n terms//
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, num = 1, den = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += num / den;
        num += 2;
        den += 2;
    }

    printf("Sum of series = %.2f", sum);
    return 0;
}
