// Program to find the sum of entered number
#include<stdio.h>
int main()
{
    int num,sum=0;

    do
    {
        printf("Enter a number(Enter 0 to stop) : ");
        scanf("%d",&num);
        sum+=num;
    } while (num!=0);
    printf("Sum is = %d\n", sum);
    return 0;
}