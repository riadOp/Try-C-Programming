#include<stdio.h>

int main(){
    int num;
    printf("Enter your number = ");
    scanf("%d", &num);
    int prime =1;
    if(num<=1){
    prime=0;
    }else{
        for(int i= 2; i<num ;i++){
            if(num % i == 0){
                prime = 0;
                break;
            }
        }
    }
    if(prime){
        printf("%d is a prime number " , num);
    }else{
        printf("%d is not a prime number ", num);
    }
    return 0;
}