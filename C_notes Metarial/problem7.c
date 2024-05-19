
// write a code to find the smallest number 
#include<stdio.h>

int main(){
   int num1,num2 ;
   printf(" Enter your number = ");
   scanf("%d" , &num1);
   printf("enter another number = ");
   scanf("%d" , &num2);
   num1>num2 && printf("%d" , num2) || printf("%d" , num1);
   
   /*(&&) operator to check if num1 is less than num2.
    If that condition is true, it proceeds to execute the first printf statement,*/
   
    return 0 ;
}