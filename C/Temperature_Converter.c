//Create a program to change celcius to Fahrenheit and Fahrenheit is celcius
 //1. start
 //2. Enter temperature degree(F or c)
 //3. enter temperature(eg 43)
 //4. if F convert to C [C = (5/9)*(F-32)]
 //5. If C convert to F [F = (9/5*C)+32]
 //6. print result
 //7. end

#include<stdio.h>

int main()
{
    char type;
    double t, res;

    printf("Choose temerature degree(F OR C): ");
    scanf("%s",&type);

    if (type != 'F' && type != 'f' && type != 'C' && type != 'c') 
    {
        printf("Invalid input! Please enter 'F' or 'C' for temperature unit.\n");
        return 1;
    }

    printf("Enter temperature: ");
        scanf("%lf",&t);

    if(type == 'f' || type == 'F')
    {
        res = (5 / 9)*(t - 32);
        printf("%2lf Fahrenheit is %2lf in celcius", t, res);
    }
    
    else if(type == 'c' || type == 'C')
    {
        res = (9 / 5*t) + 32;
        printf("%2lf celcius is %2lf in Fahrenheit", t, res);
    }

    return 0;
}