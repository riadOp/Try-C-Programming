#include<stdio.h>

float circle(float x);
float square(float y );
float rectangle(float length ,float width);

int main(){
    int a;
    printf("1.Circle\n2.Square\n3.Rectangle\n");
    printf("Enter Your Choise : ");
    scanf("%d",&a);

    switch(a){
        case 1:{
            float b; 
            printf("Enter radius of Circle :");
            scanf("%f",&b);
            float result = circle(b);
            printf("Area of Circle = %f",result);
            break;
        }
        case 2:{ 
            float c;
            printf("Enter side of a square :");
            scanf("%f",&c);
            float new_result = square(c);
            printf("Area of Square = %f",new_result);
            break;
        }
         case 3: {
            float d,e;
            printf("Enter length and width of rectangle:");
            scanf("%f%f",&d,&e);
            float neww_result = rectangle(d,e);
            printf("Area of rectangle = %f",neww_result);
            break;
        }
        default:{
            printf("Invalid choise");
        }   

    }
    return 0;
}

float circle(float x){
    return 3.1416*x*x;
}

float square(float y){
    return y*y;
}

float rectangle(float length ,float width){
    return length*width;
}
