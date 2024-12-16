//WAP to determine elegibility for admission to a profesional course based on marks
#include<stdio.h>
#include<conio.h>

void main()
{
    float m,p,c;
    printf("Enter your marks in Mathematics:");
    scanf("%f",&m);
    printf("Enter your marks in Physics:");
    scanf("%f",&p);
    printf("Enter your marks in Chemestry");
    scanf("%f",&c);

    if((m + p + c >= 190) || (m + p >= 140))
    {
        printf("You are eligible. Congratulations!!!");
    } 

    else
    printf("You are not eligible");
   
    getch();
}