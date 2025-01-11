//WAP to merge two arrays of same size sorted in descending order.

#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a1[n], a2[n], a3[2*n];
    
    printf("Enter elements of first array (sorted in descending order):\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a1[i]);
    }
    
    printf("Enter elements of second array (sorted in descending order):\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a2[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        a3[i] = a1[i];  
        a3[i + n] = a2[i];  
    }

    
    for(int i = 0; i < 2*n - 1; i++) 
    {
        for(int j = 0; j < 2*n - i - 1; j++) 
        {
            if(a3[j] < a3[j + 1]) 
            {
                // Swap the elements
                int temp = a3[j];
                a3[j] = a3[j + 1];
                a3[j + 1] = temp;
            }
        }
    }

    
    printf("Merged and sorted array in descending order:\n");
    for(int i = 0; i < 2*n; i++) 
    {
        printf("%d ", a3[i]);
    }
    printf("\n");

    return 0;
}
