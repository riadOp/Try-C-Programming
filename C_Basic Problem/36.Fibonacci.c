//write a programme to calculate Fabonacci of nth number .

#include <stdio.h>

int fabo(int n);

int main() {
    int a;
    printf("Enter Your Number : ");
    scanf("%d",&a);
    printf("Fibonacci of %dth is %d\n",a,fabo(a));
    return 0;
}

int fabo(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }else{
            return 1;
        }
    }
    int fib_1 = fabo(n-1);
    int fib_2 = fabo(n-2);
    return fib_1 + fib_2;
}