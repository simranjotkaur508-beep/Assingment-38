#include <stdio.h>

int compare(char s1[], char s2[])
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        char a = s1[i];
        char b = s2[i];

        if (a >= 'A' && a <= 'Z')
            a = a + 32;

        if (b >= 'A' && b <= 'Z')
            b = b + 32;

        if (a != b)
            return 0;

        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        return 1;

    return 0;
}

int main()
{
    char s1[] = "Hello";
    char s2[] = "HELLO";

    if (compare(s1, s2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}