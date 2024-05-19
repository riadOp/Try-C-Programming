#include<stdio.h>

int main(){
    int lucky_number;
    printf(" Write a number for lottery(1-7) =  ");
    scanf("%d" , &lucky_number);
    
    switch (lucky_number){
        case 1 : printf("ooPss ! Better luck next time ");
                 break;
        case 2 : printf("ooPss ! Better luck next time ");
                 break;
        case 3 : printf("ooPss ! Better luck next time ");
                 break;
        case 4 : printf("ooPss ! Better luck next time ");
                 break;
        case 5 : printf("ooPss ! Better luck next time ");
                 break;
        case 6 : printf("woahhhh ! You wonnn .  ");
                 break;
        case 7 : printf("ooPss ! Better luck next time ");
                 break;  
        default:
        printf(" invalid card ");                                                    
    }
    return 0 ;
}
