//Sum of N Natural Number . 
#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter Your number = ");
    scanf("%d",&n);

    for(int i = 1; i<=n ; i++){
        sum = sum + i;
    } 
    
    printf("Sum = %d",sum);

    return 0;
}