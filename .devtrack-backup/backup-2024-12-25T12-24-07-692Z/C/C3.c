//WAP to create Loan Menu
/*
EDUCATION LOAN
1. Personal Loan
2. Education Loan
3. Exit
in personal---> salary+input if sal>=500 loan sal*5 if >500 not loan
in edu----> ask %  if % >=70 loan = reqloan X %  
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    float salary, ploan, reqamount, per, eloan;
    int x;


    printf("Welcome to Loan Bank\n");
    printf("Press 1 to access Personal Loan\n");
    printf("Press 2 to access Education Loan\n");
    printf("Press 3 to Exit\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1: printf("Welcome to Personal Loan");
            printf("\nEnter your salary: ");
            scanf("%f",&salary);

            if(salary >= 500)
            {
                ploan = salary * 5;
                printf("\nPersonal Loan of %f", ploan);
            }

            else
            printf("You are not eligible for Personal Loan!!!");
        break;
    
    case 2: printf("Welcome to Education Loan.\n");
            printf("Enter your Percentage: ");
            scanf("%f",&per);
            if(per >= 70)
            {
                printf("Enter the amount for loan: \n");
                scanf("%f",&reqamount);

                eloan = reqamount * per/100;
                printf("Educational Loan of %f", eloan);
            }
            else
            printf("You are not eligible!!!");
        break;

    default:
        break;    
    }
    getch();
}