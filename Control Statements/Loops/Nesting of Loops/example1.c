// Program to understand nesting in for loop

#include<stdio.h>
int main()
{
    int i,j;

    for ( i = 1; i <= 3; i++) /* outer loop */
    {
        printf("i=%d\n", i);
        for ( j = 0; j <=4; j++) /* inner loop */
                printf("j=%d\t", j);
        printf("\n");
    }
    return 0;
}