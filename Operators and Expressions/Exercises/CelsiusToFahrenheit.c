#include<stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("Enter the Temperature : ");
    scanf("%f", &celsius);

    fahrenheit = ( (celsius*9)/5)+32;

    printf("Temperature in Fahrenheit is : %f", fahrenheit);

}