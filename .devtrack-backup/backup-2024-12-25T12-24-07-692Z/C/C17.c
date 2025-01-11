//WAP to read temperature in centigrade and display a suiable message accourding to the temperature stated.
#include <stdio.h>
#include<conio.h>
void main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp <= 0) {
        printf("It's Extremely cold!\n");
    }
    else if (temp > 0 && temp <= 10) {
        printf("It's very cold.\n");
    }
    else if (temp > 10 && temp <= 20) {
        printf("It's cold.\n");
    }
    else if (temp > 20 && temp <= 30) {
        printf("It's nor temperature.\n");
    }
    else if (temp > 30 && temp <= 40) {
        printf("It's getting warm.\n");
    }
    else {
        printf("It's very hot!\n");
    }

    getch();
}        