// Program to find the HCF of the two values

#include<stdio.h>
int main()
{
    int num1, num2, hcf;

    printf("Enter the value to find the HCF : ");
    scanf("%d%d",&num1,&num2);

    for (int i = 1; i <=num1 || i <=num1; i++)
    {
       if (num1%i==0 && num2%i==0)
            hcf=i;
    }
    printf("The HCF of the input values : %d", hcf);

    return 0;
}