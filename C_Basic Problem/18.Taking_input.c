//Keep Taking input untill user enter an odd number .
#include<stdio.h>

int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    while(n){
        if(n % 2 != 0 ){
           printf("Odd Number Detected\n");
           break;
        }
        printf("Enter Number again = ");
        scanf("%d",&n);
    }

    return 0;
}