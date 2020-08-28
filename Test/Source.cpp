#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n - 1)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= (n * 2) - ((i * 2) + 1); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    for (int j = 1; j <= (n * 2) - 1; j++)
    {
        printf("*");
    }
    printf("\n");
    i++;
    while (i <= (n * 2) - 1)
    {
        for (int j = 1; j <= (n * 2) - i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= ((i - n) * 2) - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (n * 2) - i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
}