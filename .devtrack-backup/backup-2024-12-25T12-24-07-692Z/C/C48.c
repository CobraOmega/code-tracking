//WAP to create a bank loan interface using functions.
#include<stdio.h>

void eloan(), ploan();

int main()
{
    int y;
    printf("Welcome to Loan Bank\n");
    printf("Press 1 to access Personal Loan\n");
    printf("Press 2 to access Education Loan\n");
    printf("Press 3 to Exit\n");
    scanf("%d",&y);

    do{
        switch (y)
    {
    case 1: ploan();
            break;
    
    case 2: eloan();
            break;
   
    case 3:
        printf("Thankyou for visiting!!!");
        break;
    }
    return 0;
}while(y != 3);

}
    
void ploan()
{
    float salary,ploan;
    printf("Welcome to Personal Loan");
            printf("\nEnter your salary: ");
            scanf("%f",&salary);

            if(salary >= 500)
            {
                ploan = salary * 5;
                printf("\nPersonal Loan of %f", ploan);
            }

            else
            printf("You are not eligible for Personal Loan!!!");
        
}

void eloan()
{
    float per, eloan, reqamount;
    printf("Welcome to Education Loan.\n");
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
}