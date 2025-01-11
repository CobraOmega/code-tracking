//WAP to copy elements of one array into another array.
#include<stdio.h>

int main()
{
    int  n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n], a2[n];

    printf("Enter elements of array A:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    for(i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }

    printf("Elements of array B are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }
    printf("\n");


    return 0;
}