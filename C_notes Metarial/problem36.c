#include<stdio.h>

float temp(int n){
    if(n<=25 && n>0){
        printf("Its Cold ");
    }else if(n>25){
        printf("Its Hot");
    }else{
        printf("Invalid key!!");
    }
}

int main(){
    printf("Enter temperature : ");
    int num;
    scanf("%d", num);
    temp(num);
    return 0;
}