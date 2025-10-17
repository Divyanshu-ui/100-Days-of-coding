// Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c", toupper(name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')
            printf("%c", toupper(name[i]));
    }

    printf("\n");
    return 0;
}
