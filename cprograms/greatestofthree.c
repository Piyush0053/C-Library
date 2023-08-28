#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter a  three no :");
    scanf("%d,%d,%d", &a, &b, &c);

    if (a > c && a > b)
    {
        printf(" a is greater");
    }
    if (b > a && b > c)
    {
        printf(" b is greater");
    }
    if (c > a && c > b)
    {
        printf("  c is greater");
    }
    return 0;
}
