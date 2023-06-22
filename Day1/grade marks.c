#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid Marks");
    }
    else if(marks<49)
    {
        printf("Grade F");
    }
    else if(marks>=50 && marks<59)
    {
        printf("Grade D");
    }
    else if(marks>=60 && marks<74)
    {
        printf("Grade C");
    }
    else if(marks>=75 && marks<89)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }
}