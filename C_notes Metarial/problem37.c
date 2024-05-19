#include<stdio.h>

int main(){
    int*ptr;
    int x;

    ptr = &x;
    *ptr = 0 ;

    printf("x = %d\n" , x); // ans : 0
    printf("*ptr = %d\n" , *ptr); //ans : 0

    *ptr += 5;
    printf(" x = %d\n" , x); // ans : 5
    printf(" *ptr = %d\n" , *ptr); // ans :5

    (*ptr)++;
    printf(" x = %d\n" , x); // ans : 6
    printf(" *ptr = %d\n" , *ptr); // ans : 6
    return 0;
}