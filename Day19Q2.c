// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = (num < 0) ? -num : num;

    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
