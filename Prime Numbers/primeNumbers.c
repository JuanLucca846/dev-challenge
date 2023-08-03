#include <stdio.h>

int primeNumber(int number)
{
    int p = 2, result = 0;
    for (; p <= number / 2; p++)
    {
        if (number % p == 0)
        {
            result++;
            break;
        }
    }
    return result;
}

int main()
{
    int p = 2, count = 0, prime;

    for (; count < 10; p++)
    {
        prime = primeNumber(p);
        if (prime == 0)
        {
            printf("%d is a prime number\n", p);
            count++;
        }
    }

    return 0;
}