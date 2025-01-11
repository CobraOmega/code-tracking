//wap to print all natural numbers( n to 1) in reverse using while loop
#include<stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(n >= 1)                       
    {
        printf("%d\n", n);
        n--;

    }

    return 0;
}