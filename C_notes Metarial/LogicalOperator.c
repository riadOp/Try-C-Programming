#include<stdio.h>

int main(){
   printf("%d \n" , 4==4 && 4<3);
    printf("%d \n" , 4==4 && 4>3);
   printf("%d \n" , 4==4 || 4<3);
   printf("%d \n" , !(4==3) && !(4<3) ); 
    printf("%d \n" , !(4==3) && !(4>3) );
    return 0 ;
}