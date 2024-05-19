//Write a programme to create a lottery game .
#include<stdio.h>

int main(){
    int number;
    printf("Enter a number (1-9) to win lottery : ");
    scanf("%d",&number);

    switch(number){
        case 1 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 2 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 3 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 4 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 5 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 6 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 7 : printf("Woahhh !! You Win !!!!.");
            break;
        case 8 : printf("Oppsss !! Better Luck Next time .");
            break;
        case 9 : printf("Oppsss !! Better Luck Next time .");
            break;
        default : printf("Invalid number !");                                                                                                                
    }
    return 0;
}