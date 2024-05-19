#include<stdio.h>

int main(){
    int row = 4;
    int coloum = 5;
    for(int i =1 ; i<=row; i++){
        for(int j = 1 ; j<=coloum; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}