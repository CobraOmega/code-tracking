//WAP to check whether two integers are equal or not.
#include<stdio.h>
#include<conio.h>
 void main()
 {
    int x, y;
    printf("Enter a integer: \n");
    scanf("%d%d",&x,&y);

    if(x == y)
    printf("Two integers are equal to each other.");
    else
    printf("Integers are not equal.");
    getch();
 }
