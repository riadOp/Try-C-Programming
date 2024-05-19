//Write a programme to calculate the factorial of n.Given by user
#include<stdio.h>

int main(){
    int fact = 1;
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
     
    for(int i = 1; i<=n; i++){
        fact = fact * i; 
    }
    
    printf("Factorial = %d",fact);

    return 0;
}