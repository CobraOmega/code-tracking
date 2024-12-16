//WAP for addition of 2d array.

#include<stdio.h>

int main()
{
    int a1[3][3],a2[3][3],a3[3][3], i, j;

    printf("Enter data for matrix A\n");

    for(i = 0 ; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter data for matrix b\n");
    for(i = 0 ; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }

    printf("Addtion of matrix A and B:\n");
    for(i=0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            a3[i][j] = a1[i][j] + a2[i][j];
            printf("%d ",a3[i][j]);
        }
    printf("\n");
    }



    return 0;
}