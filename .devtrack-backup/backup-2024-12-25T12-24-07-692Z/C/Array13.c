//WAP to sort elements of an array in ascending order.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &a1[i]);  
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a1[j] > a1[j + 1])
            {
                int temp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");

    return 0;
} 