#include<stdio.h>
int main()
{
    int a,i,j=1;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("%d %d %d\n",j,j*j,j*j*j);
        j++;
    }
    return 0;
}