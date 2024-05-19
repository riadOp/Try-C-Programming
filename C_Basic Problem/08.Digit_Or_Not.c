// Write a programme to detect provided number is digit or not
#include<stdio.h>

int main(){
    char c;
    printf("Enter YOur Chracter : ");
    scanf("%c",&c);

    c>='0' && c<='9' && printf("%c is a digit",c) || printf("%c is not a digit",c);
    
    return 0;
}