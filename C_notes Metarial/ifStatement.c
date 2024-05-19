#include<stdio.h>

int main(){
    int runs ;
    printf("Enter your run = ");
    scanf("%d" , &runs);

    if (runs>=50 && runs<100) {
        printf("You made a half century !");
    }
    else if (runs>=100 && runs<=150) {
     printf("Woah ! You made a century ");
    }
    else if(runs>150){
        printf("Too much");
    }
    
    else{
        printf("you lose ");
    }
    


    return 0 ;
}