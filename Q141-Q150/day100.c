#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student *p;

    p = (struct Student *)malloc(sizeof(struct Student));

    if (p == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    (*p).roll = 10;
    (*p).marks = 88.5;

    // display values
    printf("Roll : %d\n", (*p).roll);
    printf("Marks: %.2f\n", (*p).marks);

    free(p);

    return 0;
}
