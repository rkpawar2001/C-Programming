//Interchange the value of a and b

#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter the value of a and b");
    scanf("%d%d", &a,&b);

    printf("a=%d b=%d\n",a,b);

    temp=a, a=b, b=temp;

    printf("a=%d b=%d",a,b); 
}