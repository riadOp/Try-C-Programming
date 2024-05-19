#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    float c;
    scanf("%f",&c);
    int d,e;
    scanf("%d%d",&d,&e);
    float f;
    scanf("%f",&f);
    printf("VALOR A PAGAR: R$ %.2f\n",(b*c)+(e*f));

    return 0;
}