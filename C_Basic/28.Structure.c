#include <stdio.h>

struct list{
    int apple;
    int lichi;
    float pi;
}list1,list2;

int main() {
    printf("Enter the value of apple : ");
    scanf("%d",&list1.apple);
    printf("Enter the value of lichi : ");
    scanf("%d",&list1.lichi); 
    printf("Enter the value of pi : ");
    scanf("%f",&list1.pi);
    

    printf("Enter the value of apple : ");
    scanf("%d",&list2.apple);
    printf("Enter the value of lichi : ");
    scanf("%d",&list2.lichi); 
    printf("Enter the value of pi : ");
    scanf("%f",&list2.pi);
    

    printf("value of apple in list 1 : %d\n",list1.apple);
    printf("value of lichi in list 1 : %d\n",list1.lichi);
    printf("value of pi in list 1 : %f\n",list1.pi);
    
    
    printf("value of apple in list 2 : %d\n",list2.apple);
    printf("value of lichi in list 2 : %d\n",list2.lichi);
    printf("value of pi in list 2 : %f\n",list2.pi);
    
    return 0;

}