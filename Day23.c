// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        int numerator = 2 * i;           
        int denominator = 4 * i - 1;     

        sum += (double)numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
