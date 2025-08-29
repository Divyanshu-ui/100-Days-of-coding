#include<stdio.h>

int main() {

    int a, b, multiply;

    printf("write the first number");
    scanf("%d", &a);

    printf("write the secound number");
    scanf("%d", &b);

    multiply= a * b;
  
    printf("the multiplication of %d and %d is %d\n", a, b, multiply);  
    

    return 0;
} 