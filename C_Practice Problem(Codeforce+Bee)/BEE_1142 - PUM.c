#include<stdio.h>
int main()
{
    int a,i,j,n=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("%d %d %d PUM\n",n+1,n+2,n+3);
        n=n+4;
    }
    return 0;
}