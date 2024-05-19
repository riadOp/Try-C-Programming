//Sum of n natural number using Recursion.
#include <stdio.h>

int sum(int n);

int main() {
    printf("Sum = %d",sum(5));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm = sum(n-1);//Factttttt
    int sumN = sumNm+n;
}