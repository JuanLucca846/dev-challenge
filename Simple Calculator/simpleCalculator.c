#include <stdio.h>

int main()
{
    char operator;
    float number1, number2;

    printf("Choose an operator, examples:(+, -, *, /)\n");
    scanf("%c", &operator);

    if (operator== '+')
    {
        printf("Enter two numbers: \n");
        scanf("%f %f", &number1, &number2);
        printf("the result of: %.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
    }
    else if (operator== '-')
    {
        printf("Enter two numbers: \n");
        scanf("%f %f", &number1, &number2);
        printf("the result of: %.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
    }
    else if (operator== '*')
    {
        printf("Enter two numbers: \n");
        scanf("%f %f", &number1, &number2);
        printf("the result of: %.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
    }
    else if (operator== '/')
    {
        printf("Enter two numbers: \n");
        scanf("%f %f", &number1, &number2);
        printf("The result of: %.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
    }
    else
    {
        printf("Invalid operator!");
    }

    return 0;
}
