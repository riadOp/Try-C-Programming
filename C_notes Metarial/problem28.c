#include<stdio.h>

float circle(float radious){
    float result = 3.14*radious*radious;
    return result; 
}

float square(float side){
    float result2 = side*side;
    return result2;
}

float rectangle(float width , float length){
    float result3 = 2*(width+length);
    return result3;
}

int main(){
    int choise;
    printf("Select Your shape : \n");
    printf(" 1.Circle\n 2.Square\n 3.Rectangle\n");
    printf("Enter number(1-3) : ");
    scanf("%d",&choise);
    
        switch(choise){
        case 1 : printf("Enter radious of circle = ");
                 float radious;
                 scanf("%f" , &radious);
                 float Final_result = circle(radious);
                 printf("Area of circle is = %f" , Final_result);
        break;
        
        case 2 : printf("Enter side of square = ");
                float side;
                scanf("%f" , &side);
                float Final_result2 = square(side);
                printf("Area of Circle is = %f" , Final_result2);
        break;
        
        case 3 :printf("Enter lenth of the rectangle = ");
                float  lenth , width ;
                scanf("%f" , &lenth);
                printf("Enter width of the rectangle = ");
                scanf("%f" , &width);
                float Final_result3 = rectangle(lenth , width);
                printf("Area of rectangle is = %f" , Final_result3);
        break;          
        
        default : 
        printf("Invalid Choise !! ");
    }
    return 0 ;
}
