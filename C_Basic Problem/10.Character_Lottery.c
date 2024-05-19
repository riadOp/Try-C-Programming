//Write a programme to create a lottery game using character.
#include<stdio.h>

int main(){
    char character;
    printf("Enter a chracter (a-i) to win lottery : ");
    scanf("%c",&character);

    switch(character){
        case 'a' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'b' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'c' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'd' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'e' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'f' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'g' : printf("Woahhh !! You Win !!!!.");
            break;
        case 'h' : printf("Oppsss !! Better Luck Next time .");
            break;
        case 'i' : printf("Oppsss !! Better Luck Next time .");
            break;
        default : printf("Invalid chracter !");                                                                                                                
    }
    return 0;
}