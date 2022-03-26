#include<stdio.h>
int main()
{
    int grades ;
    char grade;
    printf("Enter your grades(0-100): ");
    scanf("%d" , &grades);
    if(grades <0 || grades >100)
{
    printf("Invalid Grade");
        return 0;
    }
    if(grade>=90 && grade<=100)
        grade = 'A';
    else if(grade>=80)
        grade = 'B';
    else if(grade>=70)
        grade = 'C';
    else if(grade>=60)
        grade = 'D';
    else if(grade>=50)
        grade = 'E';
    else
        grade = 'F';
    printf("Grade: %c\n",grade);
    return 0;
}