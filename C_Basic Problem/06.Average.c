//Calculate the average of 3 number provided by user .
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 number =");
    scanf("%d%d%d",&a,&b,&c);
    
    float average = (a+b+c)/3;
    
    printf("Average of %d,%d and %d is %f",a,b,c,average);
    
    return 0;
}