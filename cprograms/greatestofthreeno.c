#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter a  three no :");
    scanf("%d,%d,%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else{
            printf(" %d is gratest", c);}
    }
    else
    {
        if (b > c)
        {printf(" %d is greatrer", b); 
        }        
            else
              {  printf("%d is greatest", c); 
              }
        
    }
    return 0;
}