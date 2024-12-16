//WAP to find 10% bonus 5% pf and netsel of employee structure using operator.
#include<stdio.h>

int main()
{
    struct emp
    {
    char name[20];
    float salary, pf, bonus, netsal;
    };
    struct emp e1;

    printf("\nEnter your name: ");
    scanf("%s",&e1.name);
    printf("\nEnter your salary: ");
    scanf("%f",&e1.salary );
    
    e1.bonus = e1.salary *10/100;
    printf("\nYour bonus is %f",e1.bonus);

    e1.pf = e1.salary *5/100;
    printf("\nYour pf is %f",e1.pf);

    e1.netsal = e1.salary + e1.bonus - e1.pf;
    printf("\nYour Netsalary is %f",e1.netsal);

    return 0;
}