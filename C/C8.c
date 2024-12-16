//WAP to a calculator by switch case
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    float a, b, c;

    printf("CALCULATOR\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d",&x);

    printf("Enter two numbers: \n");
        scanf("%f%f",&a,&b);

    switch(x)
    {
        case 1:
        printf("Enter two numbers: \n");
        scanf("%f", &a, &b);
        c = a + b;
        printf("%f", c);
        break;

        case 2:
        printf("Enter two numbers: \n");
        scanf("%f", &a, &b);
        c = a - b;
        printf("%f", c);
        break;
        
        case 3:
        printf("Enter a numbers: \n");
        scanf("%f", &a, &b);
        c = a * b;
        printf("%f", c);
        break;

        case 4:
        printf("Enter two numbers: \n");
        scanf("%f", &a, &b);
        c = a / b;
        printf("%f", c);
        break;

        default:
        printf("Invalid Choice!!!");
        break;
    }
    getch();
}