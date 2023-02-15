// Program to perform arithmetic operation in integers
#include<stdio.h>
int main()
{
    char op;
    int a,b;

    printf("Enter number , operator and another number");
    scanf("%d%c%d",&a,&op,&b);

    switch (op)
    {

    case '+':
        printf("Result = %d\n",a+b);
        break;
    case '-':
        printf("Result = %d\n",a-b);
        break;
    case 'x':
    case 'X':
    case '*':
        printf("Result = %d\n",a*b);
        break;
    case '/':
        printf("Result = %d\n",a/b);
        break;
    case '%':
        printf("Result = %d\n",a%b);
        break;
    default:
        printf("Please enter valid expression like : '2+3'");
        break;
    }
    return 0;
}