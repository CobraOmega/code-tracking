//WAP to check whether you are eligible to vote or not.
#include<stdio.h>
#include<conio.h>

void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    printf("Congratulations. You are eligible to vote.");

    else
    printf("You are not eligible to vote.");
    getch();
}