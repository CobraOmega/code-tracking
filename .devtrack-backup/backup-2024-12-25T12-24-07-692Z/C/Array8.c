//WAP to read n number of values in an array and display them in reverse order.

#include<stdio.h>

int main()
{
    int  n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Given array in reverse order:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");

    return 0;
}