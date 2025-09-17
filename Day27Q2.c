/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   **/
   #include <stdio.h>

int main() {
    int n = 4; // number of rows for the upper half
    
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
