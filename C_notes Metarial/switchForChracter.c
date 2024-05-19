#include<stdio.h>

int main(){
    char lucky_alphabet;
    printf(" Enter a alphabet fo lottery(a-z) =  ");
    scanf("%c" , &lucky_alphabet);
    
    switch (lucky_alphabet){
        case 'c' : printf("ooPss ! Better luck next time ");
                 break;
        case 'b' : printf("ooPss ! Better luck next time ");
                 break;
        case 'a': printf("ooPss ! Better luck next time ");
                 break;
        case 'e' : printf("ooPss ! Better luck next time ");
                 break;
        case 'f' : printf("ooPss ! Better luck next time ");
                 break;
        case 'g' : printf("woahhhh ! You wonnn .  ");
                 break;
        case 'h' : printf("ooPss ! Better luck next time ");
                 break;  
        default:
        printf(" invalid card ");                                                    
    }
    return 0 ;
}
