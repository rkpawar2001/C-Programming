// Program to print the numbers in reverse order with a difference of 2

#include<stdio.h>
int main()
{
    int k=10;

    while (k>=2)
    {
        printf("%d\t",k);
        k=k-2;
    }
    printf("\n");
    
    return 0;
}