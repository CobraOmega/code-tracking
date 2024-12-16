//WAP to store element in an array and print them.
#include<stdio.h>

int main()
{
    int a1[3], i;

    printf("Enter 3 elements of array:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d",&a1[i]);
    }
    
    for(i = 0; i < 3; i++)
    {
        printf("%d ", a1[i]);
    }

    return 0;
}