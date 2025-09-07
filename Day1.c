#include<stdio.h>

int main()
{
    float a, b, c, Addition;

    printf("Enter the first number = ");
    scanf("%f", &a);

    printf("Enter the secound number = ");
    scanf("%f", &b);

    Addition = a + b;

    printf("total =%.2f", Addition);

    return 0;
}