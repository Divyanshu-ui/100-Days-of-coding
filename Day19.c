// Write a program to find the LCM of two numbers.

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 0;
    }

    hcf = gcd(num1, num2);

    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
