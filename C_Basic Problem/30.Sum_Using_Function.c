//Calculte the sum of 2 number using Function
#include<stdio.h>

int sum(int x,int y);

int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Another Number : ");
    scanf("%d",&b);
   
    int s = sum(a,b);//Function Call
   
    printf("Sum = %d",s);
    return 0;
}

int sum(int x , int y){
    return x+y;
}