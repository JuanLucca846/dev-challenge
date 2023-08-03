#include <stdio.h>

int FACTORIAL(int number)
{
    int f = 1;

    while (number > 1)
    {
        f *= number--;
    }
    return f;
}

int main()
{
    int number = 0, f;

    printf("Enter a number: \n");
    scanf("%d", &number);

    f = FACTORIAL(number);

    printf("The factorial of %d is %d", number, f);
    return 0;
}