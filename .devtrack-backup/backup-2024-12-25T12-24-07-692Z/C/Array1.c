//Traverse an array.
#include <stdio.h>
#include <conio.h>

void traverse (int*, int);  //function prototype for traversing
void main()
{
    int arr [5] = {15, 25, -1, 13, 4};
    int n = 5;

    printf("Enter any key to perform traversal of array and to display it's elements: \n");
    getch();

    traverse(arr, n); //calling traverse function
    getch();
}

    void traverse (int *array, int size)
{
        int i;
        for(i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,array[i]);
    }

