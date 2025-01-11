//WAP to find sum of series 1!/1+2!/2+3!/3+4!/4+5!/5 using functions.
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate each term in the series
float term(int n) {
    return (float) factorial(n) / n;
}

// Function to calculate the sum of the series
float sumSeries(int terms) {
    float sum = 0.0;
    for (int i = 1; i <= terms; i++) {
        sum += term(i);
    }
    return sum;
}

int main() {
    int terms = 5; // Number of terms in the series
    float result = sumSeries(terms);
    
    printf("Sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is: %.2f\n", result);
    return 0;
}
