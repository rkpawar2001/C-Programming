#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number a \n");
    scanf("%d", &a);

    printf("Enter second number b \n");
    scanf("%d", &b);

    printf("Enter third number c \n");
    scanf("%d", &c);

    printf("The multiplication of the entered number is %d \n", a*b*c);
    // scanf("%d%d%d",&a,&b,&c);

    return 0;
}