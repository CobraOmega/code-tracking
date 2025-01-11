//WAP to print all odd numbers between 1 to 100.

#include <stdio.h>

int main() {
    int num = 1; 

    printf("Odd numbers between 1 and 100:\n");
    
    while (num <= 100) {
        printf("%d\n", num); 
        num += 2; 
    }

    return 0;
}
