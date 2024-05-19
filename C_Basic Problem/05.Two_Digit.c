//Write a Programme to detect two digit Number
#include<stdio.h>

int main(){
    int a;
    printf("Enter Your Number = ");
    scanf("%d",&a);

    (a>9 && a<100 )&& printf("%d is a two digit number",a) || printf("%d is not a two digit number ",a);
    
    return 0;
}