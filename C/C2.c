//WAP to find bonus 10%, pf 5%, and netsalary of employee
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
    getch();
}