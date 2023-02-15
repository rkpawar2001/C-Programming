// Program to find the factorial of any number
// n! = n*(n-1)*(n-2)

#include<stdio.h>
int main()
{
    int n,num;
    long fact=1;

    printf("Enter Number : ");
    scanf("%d",&n);

    num=n;

    if (n<0)
    {
        printf("No factorial of negative values\n");
    }
    else
    {
        while (n>1)
        {
            fact*=n;
            n--;
        }
        printf("Factorial of : %d = %ld\n",num,fact);
    }
    
    return 0;
    
}