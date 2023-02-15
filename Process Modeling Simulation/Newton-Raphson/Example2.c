// * x+e^x

#include <stdio.h>
#include <math.h>
#define e 0.001
#define f(x) pow(x, 1) + pow(e, x)
#define df(x) 1 + pow(e, x)

int main()
{
    float x0, x1, f0, f1, df0;
    int i = 0;

    printf("Enter the value of x0 ");
    scanf("%f", &x0);

    do
    {
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        f1 = f(x1);
        x0 = x1;
        i++;

        printf("No. of Iteration = %d\t", i);
        printf("Root = %f\t", x1);
        printf("Value of function = %f\t", f1);
    } while (fabs(f1) > e);

    return 0;
}