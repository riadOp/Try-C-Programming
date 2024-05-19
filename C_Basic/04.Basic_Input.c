#include<stdio.h>

int main(){
    int a,b,c;
    int integer = 10;
    float real_number = 3.1416;
    char character = 'a';
    double number_long = 2.333;

    printf("%d is a integer\n",integer);
    printf("%f is a Real Number\n",real_number);
    printf("%c is a Chracter\n",character);
    printf("%lf is a Double\n",number_long); 

    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Your number is %d\n",a);

    printf("Enter two integer : ");
    scanf("%d%d",&b,&c);
    printf("Your numbers are %d and %d \n",b,c);
    return 0;
}