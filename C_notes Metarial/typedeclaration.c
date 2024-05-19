#include<stdio.h>

int main(){
   // Valid 
   int Age = 14 ; 
   int oldAge = Age ;
   int newAge = oldAge + 1 ;
   printf("%d", newAge );
   
   //unvalid
   int age = 44;
   int newage = age , oldage ; // have to declare variable before using it .
   int oldage = 55;
   printf("%d", newage); 
    
    //valid
    int a,b,c ;
    a=b=c=1;

    //unvalid
    int a = b = c = 1;  // cannot declare variable and assing value at the same time
    return 0 ;
}