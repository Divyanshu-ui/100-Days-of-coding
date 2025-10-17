// Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        printBinary(number);
        printf("\n");
    }

    return 0;
}
