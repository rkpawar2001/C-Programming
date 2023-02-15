// Write a Program to Find Sum of Digits of a given number
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter Number :");
    scanf("%d",&num);

    // loop to find sum of digits
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    // output
    printf("Sum: %d\n", sum);

    return 0;
}