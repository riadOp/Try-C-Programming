//Calculate the area of rectangle
#include<stdio.h>

int main(){
    int length,width;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the width :");
    scanf("%d",&width);
    
    int Final_Result = 2*(length*width);
    printf("Area of Rectangle is %d",Final_Result);
    return 0;
}