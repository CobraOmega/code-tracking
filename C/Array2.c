//insertion in array
#include <stdio.h>
#include <conio.h>

void main()
{
    int array[10] = {1, 25, 15, 1, 0};
    int i, n, e, l;
    n = 5;
    
    printf("content of array are: \n");
    for(i=0; i<n;i++)
    printf("arrat[%d] = %d\n", i, array[i]);

    printf("Enter the element to be inserted: \n");
    scanf("%d",&e);

    printf("Enter the index you want to insert %d\n",e);
    scanf("%d",&l);

    for(i = n; i >= l; i--)
    array[i + 1] = array[i];

    array[l] = e;
    n = n + 1;

    printf("The content of array after insertion is: \n");
    for(i = 0;i < n; i++)
    printf("array[%d] = %d\n", i, array[i]);
    getch();
}
