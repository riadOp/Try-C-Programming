#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    int a = N/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    int b = N % 100;
    int c = b/50;
    printf("%d nota(s) de R$ 50,00\n",c);
    int d = b%50;
    int e = d/20;
    printf("%d nota(s) de R$ 20,00\n",e);
    int f = d%20;
    int g = f/10;
    printf("%d nota(s) de R$ 10,00\n",g);
    int h = f%10;
    int i = h/5;
    printf("%d nota(s) de R$ 5,00\n",i);
    int j = h%5;
    int k = j/2;
    printf("%d nota(s) de R$ 2,00\n",k);
    int l = j%2;
    int m = l/1;
    printf("%d nota(s) de R$ 1,00\n",m);
    return 0;
}