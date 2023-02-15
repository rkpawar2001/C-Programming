#include<stdio.h>
int main()
{
    int x = 8;

    printf("x=%d \n",x);
    printf("x=%d\n",x++); //postfix increment
    printf("x=%d\n",x);
    printf("x=%d\n",x--); //postfix decrement


    return 0;
}