#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    double val = sqrt((n * (n + 1)) / 2.0);
    int x = (int)val;

    if (x == val)
        printf("%d\n", x);   
    else
        printf("-1\n");      
    return 0;
}