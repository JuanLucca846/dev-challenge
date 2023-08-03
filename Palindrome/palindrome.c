#include <stdio.h>
#include <string.h>

int palindrome(char word[46])
{
    int length = 0, difference = 0, count = 0;

    length = strlen(word);
    length--;

    while (length >= count)
    {
        if (word[count] != word[length])
        {
            difference++;
        }
        count++;
        length--;
    }

    return difference;
}

int main()
{
    char word[46];
    printf("Enter a word to check if it is palindrome or not: \n");
    scanf("%s", word);

    if (palindrome(word) == 0)
    {
        printf("This word is palindrome\n");
    }
    else
    {
        printf("This word is not a palindrome\n");
    }

    return 0;
}