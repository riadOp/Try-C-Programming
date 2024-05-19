//Write a program to check if given character is digit or not
#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    (character>='0' && character<='9') ? printf("%c is a digit", character) : printf("%c is not a digit" , character);
    
    return 0;
}