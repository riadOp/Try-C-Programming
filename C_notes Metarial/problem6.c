//question : write a programme to calculate the average of 3 number .
#include<stdio.h>

int main(){
    float num1, num2, num3 ;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter Second number = ");
    scanf("%f" , &num2);
    printf("Enter third number = ");
    scanf("%f" , &num3);
    printf("Average is = %f" , (num1+num2+num3)/3);
    return 0 ; 
}