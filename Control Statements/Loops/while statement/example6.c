// Program to convert binary to decimal

#include<stdio.h>
int main()
{
    int n,nsave,rem,d,j=1,dec=0;

    printf("Enter Number in binary : ");
    scanf("%d",&n);
    nsave=n;

    while (n>0)
    {
        rem=n%10;
        d=rem*j;
        dec+=d;
        j*=2;
        n/=10;
    }
    printf("Binary Number = %d, Decimal Number =%d",nsave,dec);

    return 0;
}