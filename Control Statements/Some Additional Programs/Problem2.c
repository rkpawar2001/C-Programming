// Program to get difference of two dates in years, months, days
#include<stdio.h>
int main()
{
    //Declares the variables
    int d1,d2,d,m1,m2,m,y1,y2,y;

    //Taking input from the user
    printf("Enter First Date : ");
    scanf("%d%d%d",&d1,&m1,&y1);

    printf("Enter Second Date : ");
    scanf("%d%d%d",&d2,&m2,&y2);
    
    //Condition to check the day is smaller than d1
    if(d2<d1)
    {
        if(m2==3)
        {
            if(y2%100!=0 && y2%4==0 || y2%400==0) /* Check for leap year */
                    d2=d2+29;
            else
                    d2=d2+28;
        }
        else if(m2==5 || m2==7 || m2==10 || m2==12) /* days count for different months from 30 and 31*/
            d2=d2+30;
        else
            d2=d2+31;
        m2=m2-1;
    }
    if (m2<m1)
    {
        y2=y2-1;
        m2=m2+12;
    }
    // Initialize the values
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;

    //final output
    printf("Difference of the two dates is : ");
    printf("%d years %d months %d days \n ",y,m,d);

    return 0;
}