//WAP to find sum of all elements of an array.

#include<stdio.h>

int main()
{
     int  n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a1[i];
    }

    printf("Sum of array is: %d", sum);


    return 0;
}