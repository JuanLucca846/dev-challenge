#include <stdio.h>

int main()
{
    int number = 0, count = 0;

    printf("Enter a number to create the table from 1 to 10: \n");
    scanf("%d", &number);

    for (; count <= 10; count++)
    {
        printf("%d x %d = %d\n", number, count, number * count);
    }

    return 0;
}