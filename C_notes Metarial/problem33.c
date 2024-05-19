#include<stdio.h>

int fibo(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }else{
        int FibNm = fibo(n-1);
        int FibNm2 = fibo(n-2);
        int result = FibNm+FibNm2;
        return result; 
    } 
}
int main(){
    printf("Enter 'n'th Number = ");
    int n;
    scanf("%d",&n);
    int Final_result = fibo(n);
    printf("Number is = %d", Final_result);
}