#include<stdio.h>
#include<math.h>

float root(float n){
    float result = sqrt(n);
    return result;
}

float main(){
    printf("Enter your number = ");
    float num;
    scanf("%f",&num);
    float Final_result = root(num);
    if(num<=0){
        printf("Invalid !!");
    }else{
        printf("square root is = %f", Final_result);
    }
}