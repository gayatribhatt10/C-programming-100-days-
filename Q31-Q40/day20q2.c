//Swap first and last digits of a number//
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10; // last digit
    digits = (int)log10(num);
    first = num / pow(10, digits);

    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) - last + first);

    printf("Number after swapping first and last digits = %d", swapped);
    return 0;
}
