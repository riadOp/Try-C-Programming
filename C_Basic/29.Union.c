#include<stdio.h>

union hehe{
    int a;
    float b;
    char c;
}hehe1;

int main(){
    hehe1.a=10;
    hehe1.b=5.00;
    hehe1.c='d';
    printf("a=%d\n",hehe1.a);
    printf("b=%f\n",hehe1.b);
    printf("c=%c\n",hehe1.c);
    printf("c=%d\n",sizeof(hehe1));
    return 0;
}