//Write a programme to give grade to student number .
#include<stdio.h>

int main(){
    int number;
    printf("Enter your Number = ");
    scanf("%d",&number);

    if(number>30 && number<=100){
        if(number>30 && number<40){
            printf("You Passed and Got E");
        }else if(number>=40 && number<50) {
            printf("You passed and Got D");
        }else if(number>=50 && number<60){
            printf("You passed and Got C ");
        }else if(number>=60 && number <70){
            printf("You Passed and Got B");
        }else if(number>=70 && number<80){
            printf("You Passed and Got A");
        }else{
            printf("You Passed and Got A+");
        }
    }else if(number<30){
        printf("You Fail");
    }else{
        printf("Invalid Number");
    }
    return 0;
}