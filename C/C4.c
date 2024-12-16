/*
online banking
1. saving a/c
2. current a/c
3. exit
sav--> if amount >=1000 open sav account else not eligible
cur --> if amount >= 5000 open cur account else not eligible
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    float amount;
    int x;


    printf("Welcome to Online Banking\n");
    printf("Press 1 to Open Saving Account\n");
    printf("Press 2 to Open Current Account\n");
    printf("Press 3 to Exit\n");
    scanf("%d",&x);

    switch (x)
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
    getch();
}