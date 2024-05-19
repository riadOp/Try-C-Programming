//write 2 function one for to print namaste if indian and bonjour if France.
#include<stdio.h>

void printNamaste();
void printFrance();

int main(){
    char a;
    printf("Enter 'i' for Indian or Enter 'f' for france: ");
    scanf(" %c",&a);
    if(a =='i'){
        printNamaste();
    }else{
        printFrance();
    }
    return 0;
}

void printNamaste(){
    printf("Namaste\n");
}
void printFrance(){
    printf("Bonjour\n");
}