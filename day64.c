#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    scanf("%s", s);   

    int n = strlen(s);

    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;   

    int maxLen = 0;
    int start = 0;      

    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];

        
        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        
        last[ch] = i;

        
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);

    return 0;
}