#include<stdio.h>

int square(int n){
    n = n*n;
    printf("square = %d\n", n);
}

int main(){
    int number = 10;
    square(number);
    printf("square = %d\n" , number);
}