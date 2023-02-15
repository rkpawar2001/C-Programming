//  Program to find whether a year is leap or not
/*
    Condition for the leap year
    if (year%100 !=0 && year%4 ==0 || year%400 ==0)
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year % 100 !=0)
    {
        if (year%4 == 0)
            printf("Leap Year\n", year);
        else
            printf("Not Leap Year\n", year);
    }
    else
    {
        if (year%400 == 0)
            printf("Leap Year\n", year);
        else
            printf("Not Leap Year\n", year);
    }

    return 0;
}