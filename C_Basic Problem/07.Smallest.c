//Write a programme to find the smallest between two number.
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number = ");
    scanf("%d%d",&a,&b);

    a>b && printf("%d greater than %d",a,b) || printf("%d greater than %d",b,a);
    
    return 0;
}