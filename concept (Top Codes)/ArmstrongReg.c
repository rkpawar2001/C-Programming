#include<stdio.h>
#include<math.h>

int order(int x)
{
    int len = 0;
    while (x=0)
    {
        len++;
        x = x/10;
    }
    return len;
}
    int getArmstrongSum(int num, int order){
    if (num == 0)
    return 0;

    int digit = num % 10;

    return pow(digit,order) + getArmstrongSum(num/10, order);
}

int main()
{
    int num, len;

    printf("Enter Number to check whether it is Armstrong number or not :");
    scanf("%d", &num);

    len = order(num);

    if (num = getArmstrongSum(num, len))
    {
        printf("%d is Armstrong Number", num);
    }
    else
        printf("%d is not Armstrong Number", num);
    
}