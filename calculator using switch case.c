#include <stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}

Dollar to rupees program

#include <stdio.h>
int main()
{
    float a;

    printf("Enter value in rupees: ");
    scanf("%f", &a);

    if(a>=0)
    {
        printf("Value in dollars: %f", a*0.011);
    }
    else
    {
        printf("Please enter a valid value");

    }

    return 0;
}
