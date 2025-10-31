//convert temperature from Celsius to Fahrenheit:
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
