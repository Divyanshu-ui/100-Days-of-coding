#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFile = fopen("output.txt", "w");

    if (inFile == NULL) {
        printf("Error! Could not open input.txt\n");
        return 1;
    }

    if (outFile == NULL) {
        printf("Error! Could not create output.txt\n");
        fclose(inFile);
        return 1;
    }

    int ch;

    
    while ((ch = fgetc(inFile)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}