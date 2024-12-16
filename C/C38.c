//WAP to create online banking using functions.
#include<stdio.h>

int saving();
int current();

int main()
{
    int x;
    
    printf("Online Banking \n");
    printf("Press 1 for saving account\n");
    printf("Press 2 for current account\n");
    printf("Press 3 to exit\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1: 
        {
            saving();
            break;
        }

        case 2:
        {
            current();
            break;
        }

        case 3:
        {
            printf("Thankyou for visiting!!!");
            break;
        }
    }


    return 0;
}

int saving()
{
    int amount;
    printf("Welcome to Saving account\n");
        printf("\nEnter amount: ");
        scanf("%f",&amount);

        if(amount >= 1000)
         {
            printf("You are eligibe to open Saving Account.");
         }

        else
        printf("You are not eligible to open Saving Account!!!");
        return 0;
}

int current()
{
    int amount;
    printf("Welcome to Current Account.\n");
            printf("Enter account: ");
            scanf("%f",&amount);

            if(amount >= 5000)
            {
                printf("You are eligibe to open Current Account.");
            }

            else
            printf("You are not eligible to open Current Account!!!");
            return 0;
}