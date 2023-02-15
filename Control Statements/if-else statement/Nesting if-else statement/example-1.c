// Program to find the biggest number in three numbers

#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter Three Digit : ");
    scanf("%d%d%d", &a,&b,&c);

    if (a>b)
    {
        if (a>c)
            big = a;
        else
            big = c;
    }
    else
    {
        if (b>c)
            big = b;
        else
            big = c;
    }

    printf("The Bigger Number is : %d",big);

    return 0;
    
}