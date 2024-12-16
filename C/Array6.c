//wap for multi dimensional array

#include<stdio.h>

int main()
{
    int arr[3][3][3], i, j, k;

    printf("Enter data of array: ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("\t%d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}