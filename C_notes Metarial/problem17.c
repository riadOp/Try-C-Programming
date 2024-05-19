#include<stdio.h>

int main(){
    int num;
    printf(" Enter your number = ");
    scanf("%d", &num);
    while (num)
    {
        if (num %2 !=0 )
        {
            printf(" odd number decected .");
            break;
        }else{
            printf("%d\n" , num);
        }
        printf("Enter number again = "); 
        scanf("%d", &num);
    }
    return 0;
}