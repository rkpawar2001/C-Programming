// Program to print armstrong number from 100 to 999

#include<stdio.h>
int main()
{
    int n,num,cube,d,sum;
    printf("Armstrong Numbers are : \n");

    for (num = 100; num <= 999; num++) /* outer loop to generate numbers */
    {
        n=num;
        sum=0;
        while (n>0) /* Inner loop to calculate sum of cube of digits */
        {
            d=n%10;
            n/=10;
            cube=d*d*d;
            sum=sum+cube;
        } /*End of while loop*/
        if(num==sum)
            printf("%d\n",num);
    }/*End of for loop*/
    return 0;
}