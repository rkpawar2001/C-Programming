/*Integer Arithmetic Operations*/
#include<stdio.h>
int main()
{
    int a = 16, b = 4;
    float c = 16.8, d = 4.2;
    printf("Sum = %d\n", a+b);
    printf("Difference = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    printf("Remainder = %d\n", a%b);




/*Program to understand the floating point arithmetic operations*/

    printf("Sum = %.2f\n", c+d);
    printf("Difference = %.2f\n", c-d);
    printf("Product = %.2f\n", c*d);
    printf("a/b = %.2f\n", c/d);

    return 0;
}