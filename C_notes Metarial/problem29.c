#include<stdio.h>

int sum(int n){
if(n==1){
    return 1;
}else{
    int sumNm=sum(n-1);
    int sum = sumNm+n;
    return sum;
}
}
int main(){
    printf("Enter your number = ");
    int num;
    scanf("%d",&num );
    int result = sum(num);
    printf("Your sum is = %d" , result);
}