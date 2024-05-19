#include<stdio.h>
#include<math.h>
int square(int n){
    int result = pow( n ,2);
    return result ;
}

int main(){
    printf("Enter your number = ");
    int num;
    scanf("%d" , &num);
    int Final_result = square(num);
    printf("Area of square is = %d " , Final_result);
    return 0;
}