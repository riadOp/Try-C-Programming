/*Question = Write a program to calculate perimeter of rectangle
Take sides, a & b, from the user*/
#include<stdio.h>

int main(){
    float length , width;
    printf("Enter length = ");
    scanf("%f" , &length);
    printf("Enter width = ");
    scanf("%f" , &width);
    printf("perimeter of rectangle is = %f" , 2*(length+width) );
    return 0 ;
}