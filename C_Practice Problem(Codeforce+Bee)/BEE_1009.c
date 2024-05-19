#include<stdio.h>

int main(){
    char c;
    double a,b;
    scanf("%s",&c);
    scanf("%lf%lf",&a,&b);
    printf("TOTAL = R$ %.2lf\n",a+(b*0.15));
    return 0;
}