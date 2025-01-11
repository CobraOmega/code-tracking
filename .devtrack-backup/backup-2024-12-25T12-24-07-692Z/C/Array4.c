//WAP to find multiplication of 1d array.
#include<stdio.h>

int main()
{
    int a1[3], a2[3], a3[3];
    int i;

    printf("Enter data of first array:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter data of Second array:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a2[i]);
    }

    for(i = 0; i < 3; i++)
    {
        a3[i] = a1[i] + a2[i];
    }

    for(i = 0; i < 3; i++)
    {
        printf("\n%d", a3[i]);
    }

    return 0;
}