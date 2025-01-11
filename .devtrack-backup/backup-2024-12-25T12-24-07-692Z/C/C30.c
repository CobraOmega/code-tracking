//WAP to print all even numbers between 1 - 100.

#include <stdio.h>

int main() {
    int num = 2;

    printf("Even numbers between 1 and 100:\n");
    
    while (num <= 100) {
        printf("%d\n", num); 
        num += 2; 
    }

    return 0;
}
