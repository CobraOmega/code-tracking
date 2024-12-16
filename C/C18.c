//WAP to create a menu driven program to perform simple calculations

#include <stdio.h>
#include<conio.h>

void main() {
    int x;
    float a, b, result;

    while (1) { // Infinite loop to keep the program running until user exits
        // Displaying the menu
        printf("\nSimple Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d", &x);

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (x) {
            case 1: 
                result = a + b;
                printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
                break;

            case 2: 
                result = a - b;
                printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
                break;

            case 3: 
                result = a * b;
                printf("Result: %.2f * %.2f = %.2f\n", a, b, result);
                break;

            case 4: 
                if (b != 0) 
                {
                    result = a / b;
                    printf("Result: %.2f / %.2f = %.2f\n", a, b, result);
                } 
                else 
                {
                    printf("division with 0 is not valid.\n");
                }
                break;

            case 5:
                printf("You have closed calculator!!!");  

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    getch();
}
