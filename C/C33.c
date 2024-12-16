//WAP to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 2; i <= n; i+=2)
    {
        sum = sum + i;;
    }

    printf("Sum of all Even numbers between 1 to %d is %d", n, sum);
    return 0;
}