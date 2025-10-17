/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/

#include <stdio.h>

int main() {
    int rows[] = {1, 2, 3, 4, 5, 3, 1}; 
    int n = sizeof(rows) / sizeof(rows[0]);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < rows[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    
    return 0;
}
