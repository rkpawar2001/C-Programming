// Program to check even or odd in given number

#include <stdio.h>
int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Number is Negative");
        num = -num;
    }

    printf("The entered number is %d", &num);

    return 0;
}