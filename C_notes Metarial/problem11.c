//Question : write a program to to find if a chracter entered by user is upper or lower case .
#include<stdio.h>

int main(){
    char chracter ;
    printf("Enter Your Chracter = ");
    scanf("%c" , &chracter);
    //When comparing characters, you should use single quotes (') 
    if (chracter >= 'A' && chracter <= 'Z'){   
    printf("Its upper case");
    }
    else if (chracter >='a' && chracter <= 'z'){
        printf("Its a lower Case ");
    }
    else{
        printf("invalid");
    }
    return 0 ;
}