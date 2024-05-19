#include<stdio.h>

void printhW(int n);

int main(){
    printhW(5);
    return 0;
}

void printhW(int n){
    if(n == 0){
        return ;
    }
    printf("Hello!\n");
    printhW(n-1);
}