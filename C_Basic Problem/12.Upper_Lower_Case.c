//Write a Programme to detect upper or lower Case !!
#include<stdio.h>

int main(){
    char charcter ;
    printf("Enter a Character : ");
    scanf("%c",&charcter);

    if(charcter>='A' && charcter<='Z'){
        printf("%c is Upper case",charcter);
    }else if(charcter>='a' && charcter<='z'){
        printf("%c is in lower Case",charcter);
    }else{
        printf("Invalid Input");
    }
    return 0;
}