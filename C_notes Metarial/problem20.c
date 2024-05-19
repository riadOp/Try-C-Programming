#include<stdio.h>

int main(){
    int num;
    printf("Enter your number =");
    scanf("%d" , &num);
    
    int fact = 1;
    for(int i =1; i<=num ; i++){
        fact= fact*i;
    }
    printf("factorial is = %d" , fact);
    return 0 ;
}