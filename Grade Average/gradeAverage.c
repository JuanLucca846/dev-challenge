#include <stdio.h>

int main()
{
    int grade1, grade2, grade3;

    printf("Enter three grades to calculate the average grade: \n");
    scanf("%d %d %d", &grade1, &grade2, &grade3);

    if (grade1 < 0 || grade1 > 10)
    {
        printf("Invalid grade!");
    }
    else if (grade2 < 0 || grade2 > 10)
    {
        printf("Invalid grade!");
    }
    else if (grade3 < 0 || grade3 > 10)
    {
        printf("Invalid grade!");
    }
    else
    {
        printf("The average grade is %d\n", (grade1 + grade2 + grade3) / 3);
    }

    return 0;
}