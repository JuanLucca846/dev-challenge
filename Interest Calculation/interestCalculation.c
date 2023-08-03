#include <stdio.h>
#include <math.h>

int interestCalculation(float initialCapital, int investmentTime)
{
    float finalValue = 0;

    finalValue = initialCapital * pow((1 + 0.01), investmentTime);

    return finalValue;
}

int main()
{
    float initialCapital = 0, value = 0;
    int investmentTime = 0;

    printf("base income is 1percent month\n");
    printf("Enter the initial capital: \n");
    scanf("%f", &initialCapital);
    printf("Enter the investment time: \n");
    scanf("%d", &investmentTime);

    if (initialCapital > 0 && investmentTime > 0)
    {
        value = interestCalculation(initialCapital, investmentTime);

        printf("Final value = %.2f", value);
    }
    else
    {
        printf("Invalid values");
    }

    return 0;
}