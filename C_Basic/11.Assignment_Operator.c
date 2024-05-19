#include<stdio.h>

int main(){
    int a=5,b=5;
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);//a=10
    printf("%d\n",a*=b);//a=5
    printf("%d\n",a/=b);//a=25
    printf("%d\n",a%=b);//a=5
    return 0;
}