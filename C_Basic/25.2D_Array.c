#include <stdio.h>

int main() {
    int city,days;
    int sum=0;
    int temp=0;
    scanf("%d%d",&city,&days);
    int arr[city][days];
    
    for(int i=0;i<city;i++){
        for(int j=0;j<days;j++){
            printf("Enter the temperature of City %d day %d=",i+1,j+1);
            scanf("%d",&arr[i][j]);          
        }
    }

    for(int i=0;i<city;i++){
        for(int j=0;j<days;j++){
            printf("Temperatur of city %d day %d is %d\n",i+1,j+1,arr[i][j]);
            
            
        }
    }

     return 0;
    }

    
