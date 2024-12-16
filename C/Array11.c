//WAP to count total number of duplicate elements in an array.

#include <stdio.h>

int main() 
{
    int n, i, j, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n], d[n];

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        d[i] = 0;
    }

    for (i = 0; i < n; i++) 
    {
        int isDuplicate = 0;
        if (d[i] == 0) // Only process if not already marked as duplicate
        {
            for (j = i + 1; j < n; j++) 
            {
                if (a[i] == a[j]) 
                {
                    d[j] = 1; // Mark as duplicate
                    isDuplicate = 1;   // mark as duplicate for counting
                }
            }
            if (isDuplicate) 
            {
                count++; // Count each unique duplicate once
            }
        }
    }

    printf("Total number of unique duplicate elements: %d\n", count);

    return 0;
}
