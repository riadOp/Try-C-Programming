#include<stdio.h>


void indian(){
    printf("Namastee");
}
void France(){
    printf("Bonjour");
}
int main(){
    printf("Enter your nationality (I)Indian , (F) France : ");
    char natioality;
    scanf("%c", &natioality);
    if(natioality=='I'){
        indian();
    }else if(natioality=='F'){
        France();
    }else{
       printf("Invalid key !"); 
    }
    return 0;
}