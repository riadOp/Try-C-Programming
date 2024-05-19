#include<stdio.h>

float convertor(float n){
   float far = n * (1.8) + 32;
   return far;
}

int main(){
    printf("Enter your temperature(C) : ");
    float celcious;
    scanf("%f",&celcious);
    float Final_result = convertor(celcious);
    printf("Temperature is = %f " ,Final_result);
    return 0 ; 
}