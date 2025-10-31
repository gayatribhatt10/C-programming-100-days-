//Write a program to find the sum of the series up to n terms.
#include <stdio.h>

int main() {
    int n, i;             // n = number of terms, i = loop counter
    float sum = 0;        // to store total sum
    float num = 2, den = 3;  // starting numerator and denominator

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += num / den;     
        num += 2;             
        den += 4;             
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
