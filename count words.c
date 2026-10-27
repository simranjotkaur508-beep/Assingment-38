#include<stdio.h>
int count(char str[])
{
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=!0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[30];
    printf("enter a string");
    scanf("%29s",str);
    count(str);
    return 0;
}