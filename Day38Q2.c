// Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    
    printf("Enter the order of square matrix (n x n): ");
    scanf("%d", &n);

    int A[50][50];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("\nThe matrix is Symmetric.\n");
    else
        printf("\nThe matrix is NOT Symmetric.\n");

    return 0;
}
