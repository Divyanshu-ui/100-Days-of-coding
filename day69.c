#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (visited[x] == 1) {
            printf("%d\n", x);   
            return 0;
        }

        visited[x] = 1;
    }

    
    printf("No repetition\n");
    return 0;
}