//Calculate the area of a Circle
#include<stdio.h>

int main(){
    float radious;
    printf("Enter the radious of Circle : ");
    scanf("%f",&radious);
    float Final_result  = 3.1416*radious*radious;
    printf("Radious of Circle = %f",Final_result);
    return 0;
}