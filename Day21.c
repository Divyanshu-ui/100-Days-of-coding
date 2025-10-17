// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    lastDigit = num % 10;  

    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits); 

    if (digits == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
