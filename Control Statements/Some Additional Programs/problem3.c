// Program to multiply two numbers by Russian Peasant Method
#include<stdio.h>
int main()
{
    int a,b,x,y,s=0;

    //a = 4
    //b = 4

    printf("Enter two numbers to be multiplied : ");
    scanf("%d%d",&x,&y);

    a=x; //4=4=x
    b=y; //4=4=y

    while (a>=1) // 4>=1 , condition true
    {
        if(a%2!=0) // 4%2!=0 || 0!=0
                s=s+b; // s=0+4
        a/=2; // a=a/2 || a=2
        b*=2; // b=b*2 || b=8
    }
    printf("%d * %d = %d\n",x,y,s);
    return 0;
}