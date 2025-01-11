//WAP to print array in reverse order.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    printf("Size of array is :%d", n);

    int arr[n];
    printf("\nEnter elements(numerical) of array: \n");
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    printf("\nThe array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nThe array in reverse order is: ");
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}