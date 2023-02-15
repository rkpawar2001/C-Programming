// Program to find the multiplication of two numbers

#include <stdio.h>
int multiply (int x , int y); // Funcation Declaration
int main(void)
{
    int a,b,m;
    printf("Enter the values of a and b : ");
    scanf("%d%d", &a,&b);
    m = multiply(a,b); //Function Call
    printf("Multiplication of %d and %d is %d ", a,b,m);
    return 0;
}
int multiply (int x , int y) // Function Definition
{
    int m;
    m = x*y;
    return m;
}