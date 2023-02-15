// Program to check bigger number

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two number to check bigger number");
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        printf("a is Bigger = %d",a);
    }
    else
        printf("b is Bigger =%d",b);

    return 0;
}