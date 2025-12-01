#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person p;

   
    printf("Enter name: ");
    scanf("%s", p.name);

   
    printf("Select Gender:\n");
    printf("0. MALE\n");
    printf("1. FEMALE\n");
    printf("2. OTHER\n");
    printf("Enter choice: ");
    scanf("%d", (int *)&p.gender);

   
    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}