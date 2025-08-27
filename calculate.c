#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

    
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }

        
        float x, y, z;

        
        if (a >= b && a >= c) {
            z = a; x = b; y = c;
        } else if (b >= a && b >= c) {
            z = b; x = a; y = c;
        } else {
            z = c; x = a; y = b;
        }

        if (fabs((x * x + y * y) - (z * z)) < 0.0001) {
            printf("It is also a Right-angled triangle.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
