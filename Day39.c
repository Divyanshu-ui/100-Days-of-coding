// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int size = (n < m) ? n : m;   
    int diag[size];
    for (int i = 0; i < size; i++) {
        diag[i] = a[i][i];
    }

    int distinct = 1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
