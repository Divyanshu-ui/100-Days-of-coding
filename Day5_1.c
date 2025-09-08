#include <stdio.h>

int main() {
    int seconds, h, m, s;
    printf("enter seconds");
    scanf("%d", &seconds);

    h = seconds / 3600;         
    seconds = seconds % 3600;   
    m = seconds / 60;            
    s = seconds % 60;         

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}