//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.



#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
