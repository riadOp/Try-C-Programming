#include <stdio.h>

int factor(int n);

int main() {
    printf("Factor = %d",factor(3));
    return 0;
}

int factor(int n){
    if(n == 1){
        return 1;
    }
    int fac = factor(n-1);//factttt
    int f = fac * n;
}