#include<stdio.h>

int swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 2 , b=3;
    swap(&a ,&b);
    printf("a = %d\n" , a);
    printf("b = %d\n" , b);
    return 0;
}