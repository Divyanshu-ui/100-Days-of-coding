#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long actualSum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    int missing = expectedSum - actualSum;

    printf("%d\n", missing);

    return 0;
}