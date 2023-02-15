// Program to understand the use of continue statement
#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i <=5; i++)
    {
        if(i==3)
            continue;
        printf("Number=%d\n",i);
    }
    printf("Out of for loop");

    return 0;
}