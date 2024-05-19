#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int a = N % 365;
    int b = a % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",N/365,a/30,b);
    return 0;
}