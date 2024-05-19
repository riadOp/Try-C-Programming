// Question : write a programe to decect inpur number from user is two digit or not 
#include<stdio.h>

int main(){
    int num1 ;
    printf(" Enter your Number = ");
    scanf("%d" ,&num1);
    printf("%d" , num1>9 && num1<100);
    return 0 ;
}