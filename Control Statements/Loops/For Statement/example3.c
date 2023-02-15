// Multiply two positive numbers without using operator
#include<stdio.h>
int main()
{
    int a,b,i;
    int result = 0;

    printf("Enter two numbers to be multiplied : ");
    scanf("%d%d", &a,&b);

    for ( i = 1; i <= b; i++)
            result = result+a;
    
    printf("%d x %d = %d\n", a,b,result);

    return 0;
    
}