//WAP to swap values using functions.
#include<stdio.h>

int swap(int x, int y);

int main()
{
    int a,b;

    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);

    swap(a,b);
    printf("\n ");

    return 0;
}

int swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Value of A is = %d\n",x);
    printf("Value of B is = %d",y);
}
