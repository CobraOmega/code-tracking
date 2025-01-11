//Write a program to check whether a number is positive or negative.
#include<stdio.h>
#include<conio.h>

void main()  
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x >= 0)
    printf("The number is positive.");

    else if(x < 0)
    printf("The number is neagtive.");

    getch();
}