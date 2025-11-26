/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if (days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine = ₹%d\n", fine);
    return 0;
}
