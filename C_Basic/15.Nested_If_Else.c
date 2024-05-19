#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    if(a>b){
        if(a%2==0){
            printf("%d is greater than %d and %d is a even number",a,b,a);
        }else{
            printf("%d is greater than %d and %d is a odd number",a,b,a);
        }
    }else{
        printf("%d is greater than %d ",b,a);
    }
    return 0;
}