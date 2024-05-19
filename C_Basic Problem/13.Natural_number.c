#include<stdio.h>

int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    if(number>0){
        printf("%d is a natural number .",number);
    }else{
        printf("%d is not a natural number ",number);
    }
    return 0;
}