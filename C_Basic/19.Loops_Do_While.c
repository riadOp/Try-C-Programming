#include<stdio.h>

int main(){
    int i = 1;
    do{
        printf("Hello World\n");
        i++;
    }while(i <= 5);

    int j = 1;
    do{
        printf("%d\n",j);
        j ++;
    }while(j <= 5);
    
    return 0;
}