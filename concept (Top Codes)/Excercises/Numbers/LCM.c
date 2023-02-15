// Program to find the LCM of the input values

#include<stdio.h>
int main()
{
    int num1, num2, lcm;

    printf("Enter the values : ");
    scanf("%d%d",&num1,&num2);

    int max = (num1>num2 ? num1 : num2);

    for (int i = max; i <=num1*num2; i++)
    {
        if (i %num1 ==0 && i %num2 ==0)
        {
            lcm=i;
            break;
        }
    }
    printf("The LCM of the input : %d", lcm);

    return 0;
    
}