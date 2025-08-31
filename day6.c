#include<stdio.h>

int main(){

    int  a, b, c, greatest;

    printf("Enter the first number = ");
    scanf("%d", &a);

    printf("Enter the secound number = ");
    scanf("%d", &b);

    printf("Enter the third number = ");
    scanf("%d", &c);

    if(a >= b && a >= c) {
        greatest = a;
    } else if (b >= a && b >= c) {
        greatest = b;
    } else {
        greatest = c;
    }

        printf("The greatest number is %d\n", greatest);

        return 0;
    
}