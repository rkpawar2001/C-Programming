// Program to check even and odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(n%2==0)
        goto even;
    else
        goto odd;
    even:
        printf("Number is Even", n);
        goto end;
    odd:
        printf("Number is Odd", n);
        goto end;
    end:
    return 0;
}