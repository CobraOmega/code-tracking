//WAP to create one dimensional array.
#include<stdio.h>

int main()
{
    int arr[3];

    printf("Enter array:\n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}