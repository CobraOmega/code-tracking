/*
MAIN MENU
1. a/c dept
2. loan
3. exit

1, AC dept
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x, y;
    float salary, ploan, reqamount, per, eloan, amount;
    printf("MAIN MENU.\n");
    printf("Press 1 to open Accounts Department.\n");
    printf("Press 2 to open Loan Department.\n");
    printf("Press 3 to Exit.\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
    printf("Welcome to Online Banking\n");
    printf("Press 1 to Open Saving Account\n");
    printf("Press 2 to Open Current Account\n");
    printf("Press 3 to Exit\n");
    scanf("%d",&y);

    switch (y)
    {
    case 1: printf("Welcome to Saving account\n");
            printf("\nEnter amount: ");
            scanf("%f",&amount);

            if(amount >= 1000)
            {
                printf("You are eligibe to open Saving Account.");
            }

            else
            printf("You are not eligible to open Saving Account!!!");
        break;
    
    case 2: printf("Welcome to Current Account.\n");
            printf("Enter account: ");
            scanf("%f",&amount);

            if(amount >= 5000)
            {
                printf("You are eligibe to open Current Account.");
            }

            else
            printf("You are not eligible to open Current Account!!!");
        break;
    default: printf("Thankyou for visiting!!!");
        break;    
    }

        break;

        case 2:
    printf("Welcome to Loan Bank\n");
    printf("Press 1 to access Personal Loan\n");
    printf("Press 2 to access Education Loan\n");
    printf("Press 3 to Exit\n");
    scanf("%d",&y);

    switch (y)
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

        break;

        case 3:
        printf("Thankyou for visiting!!!");
        break;
    }


    getch();
}