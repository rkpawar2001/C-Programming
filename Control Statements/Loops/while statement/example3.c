// Program to print sum of any number

#include<stdio.h>
int main()
{
    int n,sum=0,rem;

    printf("Enter Number without space : ");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum of digits = %d", sum);

    return 0;
}