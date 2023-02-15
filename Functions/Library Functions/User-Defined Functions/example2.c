/* Program to find the sum of two numbers */

#include <stdio.h>
int sum(int x , int y); //Function Declaration
int main(void)
{
    int a,b,s;
    printf("Enter values of a and b : ");
    scanf("%d%d", &a,&b);

    s = sum(a,b); //Function Call
    printf("Sum of %d and %d is %d\n", a,b,s);
    
    return 0;

}
int sum(int x , int y)  //Function Definition
{
    int s = x+y;
    return s;
}
