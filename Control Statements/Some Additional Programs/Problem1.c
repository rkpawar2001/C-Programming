// Program to check whether a date valid or not

#include<stdio.h>
int main()
{
    int d,m,y;
    int flag=1, isleap=0;
    char s;

    printf("Enter Date (dd/mm/yyyy) format : ");
    scanf("%d%c%d%c%d", &d,&s,&m,&s,&y);

    if(y%100!=0 && y%4==0 || y%400==0)
            isleap=1;
    
    if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
            flag=0;
    else if(m==2)
    {
        if(d==30 || d==31 || (d==29 && !isleap))
                flag=0;
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==31)
                flag=0;
    }
    if(flag==0)
        printf("Not a valid date\n");
    else
        printf("Valid Date\n");

    return 0;

}