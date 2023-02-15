// Program to check even or odd in given number

#include <stdio.h>
int main()
{
    int num;

    printf("Enter number to check even or odd");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is Even");
    }
    else
        printf("Number is Odd");

    return 0;
}