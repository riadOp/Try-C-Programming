//write a program to cheak if a student pass or not . pass = >30 fail = <30
#include<stdio.h>

int main(){
    int marks;
    printf("Enter Your marks = ");
    scanf("%d" , &marks);
    if(marks<30){
        printf("You Fail !");
    }
    else if ( marks >= 30 && marks <=100) {
     printf(" You Passed !! ");
    }
    else{
        printf("invalid number"); 
    }
    return 0 ;
}