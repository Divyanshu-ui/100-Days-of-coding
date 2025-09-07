#include<stdio.h>
int main()
{
    float a, b, add, product, difference, quotient;

    printf("Enter the first number = ");
    scanf("%f", &a);

    printf("Enter the second number = ");
    scanf("%f", &b);

    add = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("Addition = %.3f\n", add);
    printf("Difference = %.3f\n", difference);
    printf("Product = %.3f\n", product);
    
    if (b != 0){
        printf("quotient = %.3f\n", quotient);
        
    
    } else {
        printf("quotient = undefined");
    }

    return 0;
}
