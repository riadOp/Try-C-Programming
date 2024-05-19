#include<stdio.h>

int main(){
    int x = 10;
    int*ptr ;
    ptr =&x;
    
    printf("Value of x is : %d\n" ,x);
    printf("Address of x is  :%d\n ",&x);
    printf("Value enter in ptr is  :%d\n" , ptr);
    printf("Value at the address stored in ptr :%d\n " , *ptr);
    return 0;
}