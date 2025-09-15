/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/




#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    
    printf("Enter two numbers and an operator : ");
    scanf("%d %d %c", &num1, &num2, &operator);

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) { 
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d\n", result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
