//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 
    int foundEven = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in this range.\n");
    } else {
        printf("Even numbers from 1 to %d: ", n);
        for (i = 2; i <= n; i += 2) {
            printf("%d ", i);
            product *= i;
            foundEven = 1;
        }
        if (foundEven) {
            printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
        }
    }

    return 0;
}
