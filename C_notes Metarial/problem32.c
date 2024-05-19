#include<stdio.h>

float percentange(float a , float b ,float c){
    float result = (a+b+c)/300 * 100;
    return result;
}

int main(){
    printf("Enter Your number of subject 1 = ");
    float num1,num2,num3;
    scanf("%f", &num1);
    printf("Enter your number of subject 2 = ");
    scanf("%f", &num2);
    printf("Enter your number of subject 3 = ");
    scanf("%f", &num3);
    
    float Final_result =percentange(num1,num2,num3);
    printf("Your percentange is = %f" , Final_result);  
    return 0;
}