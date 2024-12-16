//WAP to print all unique elements in an array.

#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a1[n], u[n]; 

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a1[i]);
        u[i] = 0;  // make the flag array to 0
    }

    // Check for unique elements
    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) 
    {
        if (u[i] == 0)  // If the flag is 0, the element is not marked as a duplicate
        {
            int isUnique = 1;
            // Compare with other elements to check if its duplicate
            for (j = i + 1; j < n; j++) 
            {
                if (a1[i] == a1[j]) 
                {
                    u[j] = 1;  // Mark the duplicate element
                    isUnique = 0;  // It is not unique
                }
            }
            if (isUnique) 
            {
                printf("%d ", a1[i]);  // Print the unique element
            }
        }
    }

    return 0;
}
