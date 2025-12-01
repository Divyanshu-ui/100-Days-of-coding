#include <stdio.h>

int main() {
    char filename[100];
    char newLine[1000];

    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  

    
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    
    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    
    fputs(newLine, fp);

    
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}