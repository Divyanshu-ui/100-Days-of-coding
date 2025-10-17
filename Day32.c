// Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = n1 + n2;
    int arr3[mergedSize];

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    printf("Merged array:\n");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
