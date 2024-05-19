#include <stdio.h>

int main() {
    int *ptr,a=5;
    ptr =&a;
    printf("Address of a = %d\n",&a);
    printf("Value of ptr = %d\n",ptr);
    printf("Value at the address of pointer = %d\n",*ptr);
    return 0;
}