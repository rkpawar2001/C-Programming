// Program to illustrate the use of Cast Operator

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    float p,q;
    p=a/b;
    printf("p = %f\n",p);
    q=(float)a/b;
    printf("q = %f\n",q);

    return 0;
}