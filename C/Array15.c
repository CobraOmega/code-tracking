//WAP to find maximum and minimum elements in an array.
#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n];
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
      scanf("%d", &a1[i]);  
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a1[j] > a1[j + 1])
            {
                int temp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = temp;
            }
        }
    }

    printf("Minimum element in this array is: %d",a1[0]);
    printf("\nMaximum element in this array is: %d",a1[j + 1]);
    
    return 0;
} 