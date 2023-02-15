#include <stdio.h>
int main()
{
    int number;

    printf("Insert a Number \n");
    scanf("%d", &number);
    if (number<=0){
        printf("Please try no. greater than zero"); 
    }

        if (number % 2 == 0)
        {
            printf("Number is Even");
        }
        else
        {
            printf("Number is Odd");
        }
    return 0;
}
