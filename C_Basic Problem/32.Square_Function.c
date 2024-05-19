//Write a code to calculate the square of a number (Using function.)
#include<stdio.h>
#include<math.h>

int square(int n);

int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    
    int s = square(a);
    
    printf("Square of %d is %d",a,s);
    return 0;
}

int square(int n){
    return pow(n,2);
}