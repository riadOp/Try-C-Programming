#include<stdio.h>

int main(){
    int num;
    printf("Enter a number(1-3) for gift :  ");
    scanf("%d",&num);

    switch(num){
        case 1 : printf("You Got a Football\n");
            break;
        case 2 : printf("You Got a Car");
            break;
        case 3 : printf("You Got a Cow");
            break;
        default :
            printf("Invalid Number");
    }
    return 0;
}