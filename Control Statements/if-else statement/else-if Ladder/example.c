// Program to find out the grade of the student if the marks of the 4 subject are given
/*
The method of assigning grade

percentage  >= 85                           grade = A
percentage  < 85 and percentage  >= 70      grade = B
percentage  < 70 and percentage  >= 55      grade = C
percentage  < 55 and percentage  >= 40      grade = D
percentage  < 40                            grade = E

*/

#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,total,per;
    char grade;

    printf("Enter the Marks of 5 Subjects");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;
    per = total/5;

    if (per>=85)
            grade = 'A';
    else if (per>=70)
            grade = 'B';
    else if (per>=55)
            grade = 'C';
    else if (per>=40)
            grade = 'D';
    else
            grade = 'E';

    printf("Percentage is %f, Grade is %c\n", per, grade);

    return 0;
    
}