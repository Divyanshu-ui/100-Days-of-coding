// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

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
        int numerator = 2 * i - 1;    
        int denominator = 2 * i;      

        if (i == 1) {
            sum += 1.0; \
        } else {
            sum += (double)numerator / denominator;
        }
    }

\    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
