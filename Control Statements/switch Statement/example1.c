// Program to understand the switch statement
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("First\n");
        break;
    case 2:
        printf("Second\n");
        break;
    case 3:
        printf("Third\n");
        break;
    case 4:
        printf("Fourth\n");
        break;
    default:
        printf("Wrong choice\n");
    }
}