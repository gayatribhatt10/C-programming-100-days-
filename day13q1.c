//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    int a, b;
    printf("Enter an expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if (b != 0) printf("Result = %d\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        case '%': 
            if (b != 0) printf("Result = %d\n", a % b);
            else printf("Error: Modulo by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
