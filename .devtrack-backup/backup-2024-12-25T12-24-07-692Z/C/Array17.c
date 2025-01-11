//WAP to find maximum and minimun of some values using a function that returns an array.
#include <stdio.h>
#include <limits.h> 

void findMinMax(int arr[], int size, int result[]) {
    result[0] = INT_MIN; 
    result[1] = INT_MAX; 
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > result[0]) {
            result[0] = arr[i]; 
        }
        if (arr[i] < result[1]) {
            result[1] = arr[i]; 
        }
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a1[n];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }
    
    int result[2]; 
    
    findMinMax(a1, n, result);
    
    printf("Maximum: %d\n", result[0]);
    printf("Minimum: %d\n", result[1]);

    return 0;
}

