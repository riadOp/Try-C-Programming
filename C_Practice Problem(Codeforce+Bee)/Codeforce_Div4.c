#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b<c){
        printf("STAIR\n");
    }else if(a<b>c){
        printf("PEAK\n");
    }else{
        printf("NONE\n");
    }
    return 0;
}