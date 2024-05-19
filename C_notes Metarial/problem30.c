#include<stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }else{
        int fact = factorial(n-1);
        int result = fact*n;
        return result;
    }
}

int main(){
    printf("Enter your number = ");
    int num;
    scanf("%d", &num);
    int result= factorial(num);
    printf("Factorial is = %d" , result);
    return 0;
}