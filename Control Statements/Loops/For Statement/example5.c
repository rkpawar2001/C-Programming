// Program to print the sum of digits of any number using for loop

#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for ( ; n >0; n/=10)
    {
        rem=n%10;
        sum+=rem;
    }
    printf("Sum of digit = %d\n", sum);

    return 0;
    
}