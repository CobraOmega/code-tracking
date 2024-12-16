//nested structure
#include<stdio.h>
int main()
{
    struct book
    {
    char bname[20];
    int price;
    };

    struct student
    {
        struct book b1;
        char sname;
        float qty, uprice, total, dis, cpay;
    };

    struct emp
    {
        struct student s1;
        char ename[100];
        float salary, bonus, pf,netsal;
    };
    struct emp e1;
    char ans;

    do 
    {
        printf("\nEnter book name: ");
        scanf("%s", &e1.s1.b1.bname);

        printf("\nEnter book price: ");
        scanf("%s", &e1.s1.b1.price);

        printf("\nEnter student name: ");
        scanf("%s", &e1.s1.sname);

        printf("\nEnter book quantity: ");
        scanf("%s", &e1.s1.qty);

        printf("\nEnter unit price of book: ");
        scanf("%s", &e1.s1.uprice);

        e1.s1.total = e1.s1.qty * e1.s1.uprice;
        printf("\nTotal = %f", e1.s1.cpay);

        printf("\nEnter Name: ");
        scanf("%s", &e1.ename);

        printf("\nEnter Salary: ");
        scanf("%s", &e1.salary);
        
        e1.bonus = e1.salary * 10/100;
        printf("\nYour Bonus is %f",&e1.bonus);

        e1.pf = e1.salary * 5/100;
        printf("\nYour pf is %f", &e1.pf);

        e1.netsal = e1.salary + e1.bonus - e1.pf;
        printf("\nYour Net Salary is %f", e1.netsal);

        printf("\n do you wish to continue(y\n): ");
        scanf("%s", &ans);

    }while(ans == 'y' || ans == 'Y');
    
    return 0;
}