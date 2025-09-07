#include<stdio.h>
int main(){

float area, perimeter, length, breadth;

printf("Enter the length of Rectangle = ");
scanf("%f", &length),

printf("Enter the breadth of Rectangle = ");
scanf("%f", &breadth);

area = length * breadth;
perimeter = 2 * (length + breadth);

printf("area of rectangle = %.2f\n", area);
printf("perimeter of rectangle = %.2f\n", perimeter);

return 0;
}