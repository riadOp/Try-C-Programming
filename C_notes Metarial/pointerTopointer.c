#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1 = &x;       // Pointer to an integer
    int **ptr2 = &ptr1;   // Pointer to a pointer to an integer

    printf("Value of x: %d\n", x);
    printf("Value at address stored in ptr1: %d\n", *ptr1);
    printf("Value at address stored in ptr2: %d\n", **ptr2);

    // Modifying the value of x using ptr1
    *ptr1 = 20;
    printf("Modified value of x using ptr1: %d\n", x);
    printf("Value at address stored in ptr2 after modification: %d\n", **ptr2);

    // Modifying the value of x using ptr2
    **ptr2 = 30;
    printf("Modified value of x using ptr2: %d\n", x);
    printf("Value at address stored in ptr1 after modification: %d\n", *ptr1);

    return 0;
}
