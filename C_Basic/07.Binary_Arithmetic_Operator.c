#include<stdio.h>

int main(){
    int a=3,b=10,res;
    res=a+b;
    printf("Addition = %d\n",res);
    res=b-a;
    printf("Subtraction = %d\n",res);
    res=a*b;
    printf("Multiplication = %d\n",res);
    res=a/b;
    printf("Division = %d\n",res);
    res=b%a;
    printf("Modulus/Remainder = %d\n",res);
    return 0;
}