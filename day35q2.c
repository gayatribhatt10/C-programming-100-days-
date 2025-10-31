//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
