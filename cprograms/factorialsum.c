#include <stdio.h>
int main()
{
    int sum = 0, fact = 1, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("%d", sum);
    return 0;
}