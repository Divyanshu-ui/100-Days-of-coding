// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ' && str1[i] != '\n')
            freq1[tolower(str1[i])]++;  
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ' && str2[i] != '\n')
            freq2[tolower(str2[i])]++;  
    }

    
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams!\n");
    return 0;
}
