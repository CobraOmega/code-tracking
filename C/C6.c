//WAP to find grade of employee to calc 10% bonmus 5% pf and net sal of employee if net sal >= 7k grade A net sal>=5k grade B net sal >=3k grade c else no grade
#include<stdio.h>
#include<conio.h>

void main()
{
      float salary, bonus, pf, netsal;

    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    bonus = salary * 10 / 100;
    printf("\n bonus = %f", bonus);
    
    pf = salary - 5/100;
    printf("\npf = %f", pf);

    netsal = salary + bonus - pf;
    printf("\nYour net salary is %f", netsal);

    if(netsal >= 7000)
    {
        printf("You are A grade employee");
    }

    else if(netsal >= 5000)
    {
        printf("You are B grade employee");
    }

    else if(netsal >= 3000)
    {
        printf("You are C grade employee");
    }

    else
    printf("You have no grade!!!");

    getch();
}

void main()
{
    
}