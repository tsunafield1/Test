#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n,sum;
    scanf("%d", &n);
    printf("%d ",n);
    while (n > 10)
    {
        sum = 0;
        int m = 10;
        while (n / m > 0)
        {
            m *= 10;
        }
        m /= 10;
        while (m >= 1)
        {
            sum += n / m;
            n %= m;
            m /= 10;
        }
        n = sum;
        printf("-> %d", sum);
    }
}
