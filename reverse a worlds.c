#include<stdio.h>
void reverseWrod(char str[])
{
    int i,j;
    char words[20] [30];
    int count=0;
    for(i=0;str[i]=!'\0';i++)
    {
        for(j=0;str[j]=!'\0';j++)
        {
            count++;
        }
    }

    for(i=count-1;i>=0;i--)
    {
        printf("%s",words[i]);
    }

    if(i>0)
    {
        printf(" ");
    }
}

int main()
{
    char str[100];
    printf("enter a string");
    scanf("%99s",str);
    reverseWrod(str);
    return 0;
}