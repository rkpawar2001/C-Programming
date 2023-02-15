#include <stdio.h>
int main()
{
    int marks;
    char grade;

    printf("Enter the Grade : ");
    scanf("%c", &grade);

    printf("Enter the Marks : ");
    scanf("%d",&marks);

    if (grade=='A')
    {
        if (marks>95)
            printf("Excellent Work", marks);
    }

    else
            printf("Work hard for getting grade A",marks);

    return 0;
}