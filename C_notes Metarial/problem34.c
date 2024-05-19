#include<stdio.h>

int digit(int n){
    if(n<9){
        return n; //%10 ~~ 3 // n/10~~12
    }
    int result = n%10 + digit(n/10);
    return result;
}

int main(){
    printf("Enter your Number = ");
    int num;
    scanf("%d", &num);
    int Final_result = digit(num);
    printf("sum of the digits are = %d", Final_result);
}