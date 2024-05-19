#include<stdio.h>

void recursion(int n){//create function
    if(n==0){//base case where recursion stop.
    return;
    }else{
    printf("hello World\n");
    recursion(n-1);//the rule of recursion
}
}
 int main(){
    recursion(5);
 }