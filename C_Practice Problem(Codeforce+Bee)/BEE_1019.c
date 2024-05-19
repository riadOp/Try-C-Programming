#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int a = N % 3600 ;
    int b = a % 60 ;
    int c = b%60;
    printf("%d:%d:%d\n",N/3600,a/60,c);
    return 0;
}