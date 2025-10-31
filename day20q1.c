//Find the 1’s complement of a binary number//
#include <stdio.h>

int main() {
    long long binary, onesComp = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary > 0) {
        digit = binary % 10;
        digit = (digit == 0) ? 1 : 0;  // flip 0→1, 1→0
        onesComp += digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's Complement = %lld", onesComp);
    return 0;
}
