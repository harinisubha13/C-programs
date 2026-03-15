#include<stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+': printf("Result = %d", a+b); break;
        case '-': printf("Result = %d", a-b); break;
        case '*': printf("Result = %d", a*b); break;
        case '/': printf("Result = %d", a/b); break;
        default: printf("Invalid operator");
    }

    return 0;
}
