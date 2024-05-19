#include<stdio.h>

int main() {
    int distance, fuel_efficiency;
    scanf("%d %d", &distance, &fuel_efficiency);
    
    double result = (distance * fuel_efficiency) / 12.0; 
    printf("%.3f\n", result);
    
    return 0;
}
