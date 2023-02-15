#include<stdio.h>
int main()
{
    int x,y,quo,rem;

    printf("Enter the two values");
    scanf("%d%d",&x,&y);

    if (y)
    {
        quo = x/y;
        rem = x%y;

        printf("Quotient = %d, Remainder = %d", quo, rem);
    }

    return 0;
    
}