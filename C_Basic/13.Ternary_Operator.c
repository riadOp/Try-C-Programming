#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    a>b ? printf("%d is greater tha %d",a,b) : printf("%d is greater than %d",b,a);
    
    return 0;
}