#include <stdio.h>

void palindromeOrnot(char str[])
{
    int len = 0;

    // Find the length of the string
    while (str[len] != '\0')
    {
        len++;
    }

    // Compare characters from both ends
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("Not palindrome");
            return;
        }
    }

    printf("Palindrome");
}

int main()
{
    char str[30];

    printf("Enter a string: ");
    scanf("%29s", str);

    palindromeOrnot(str);

    return 0;
}