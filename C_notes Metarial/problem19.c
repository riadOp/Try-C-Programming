#include<stdio.h>

int main(){
    int num = 5;
    while(num<=50){
        if( num%2 != 0){
         printf("%d\n" , num);
        }
        num++;
    }
    return 0;
}