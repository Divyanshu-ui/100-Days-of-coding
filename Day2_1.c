#include<stdio.h>
#define PI 3.14
int main(){

    float area, circumference, r;
   

    printf("Enter the radius of the circle = ");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("area of circle : \n%.2f\n", area);
    printf("circumference of circle : \n%.2f\n", circumference);

    return 0;
}
