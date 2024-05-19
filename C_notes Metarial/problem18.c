 #include<stdio.h>

 int main(){
    int num;
    printf("Enter your number = ");
    scanf("%d" , &num);
    while(num){
        if(num % 7 == 0){
            printf("Multiple of 7 detected ! ");
            break;
        }else{
            printf("Nope ! wrong \n");
            printf("Enter your number again = ");
            scanf("%d" , &num);
        }
    }
    return 0 ;
 }