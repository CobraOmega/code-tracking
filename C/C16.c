//WAP to calculate root of a quadratic eqn
//(-b+-√b^2-4ac) / 2a
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a, b, c, d, r1, r2, rp, ip;

    printf("The quadratic equation is -b +- √( b ^ 2 - 4ac) / 2a\n");
    printf("Enter value of a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0){
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f and Root2 = %.2f\n", r1, r2);
    }

    else if(d == 0)
    {
        r1 = -b / (2 * a);
        printf("Root1 = Root2 = %.2f\n", r1);
        
    }
/*
this part is for imaginary nums. This is a bit complex 
Since it won't take -ve in sqrt we have to imagine it as positive 
example--> -5 but 5 should be positive so -(5) here this '-' is imaginary part 
One root with real part + imaginary part.
The other root with real part - imaginary part.
*/
     else {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", rp, ip , rp, ip);
    }

    getch();
}