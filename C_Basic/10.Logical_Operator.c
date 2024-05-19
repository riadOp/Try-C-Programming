#include<stdio.h>

int main(){
    int a=3,b=5;
    printf("%d\n",b>a && a<b);
    printf("%d\n",b>a || a<b);
    printf("%d\n",!(b>a) && !(a<b));
    return 0;
}