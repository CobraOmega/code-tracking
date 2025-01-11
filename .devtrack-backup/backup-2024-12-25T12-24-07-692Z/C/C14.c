//WAP to read the value of integer and display the value of n 1 when m is +ve,0 when m is o -1 when m is -ve
#include<stdio.h>
#include<conio.h>

void main()
{
    int m;

    printf("Enter value of m: ");
    scanf("%d", &m);

    if(m > 0)
    {
          printf("Value of n is 1");
    }
  
    else if(m == 0)
    {
        printf("Value of n is 0");
    }
    
    else
    {
        printf("Value of n is -1");
    }
    
    getch();
}