//Print number Table using Function
#include<stdio.h>

void table(int x);

int main(){
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    
    table(n);
    
    return 0;
}

void table(int x){
    for(int i = 1;i<=10;i++){
        printf("%d * %d = %d \n",x,i,x*i);
    }
}