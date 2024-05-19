#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    long int e;

    printf("Size of integer is %d byte\n",sizeof(a));
    printf("Size of float is %d byte \n",sizeof(b));
    printf("Size of character  is %d byte \n",sizeof(c));
    printf("Size of double is %d byte \n",sizeof(d));
    printf("Size of long int  is %d byte \n",sizeof(e));
    return 0;
}