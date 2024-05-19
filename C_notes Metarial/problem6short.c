#include<stdio.h>

int main(){
    float num1 ,num2 ,num3 ;
    printf("enter 3 of your number( use space) = ");
    scanf("%f%f%f" , &num1 , &num2 ,&num3);
    printf("average is = %f" , (num1+num2+num3)/3 );
    return 0 ;
}