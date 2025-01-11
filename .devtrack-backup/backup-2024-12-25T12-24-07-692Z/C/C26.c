//WAp for do while for prev question.
#include<stdio.h>
int main()
{
    int n,sq;
    char ans;

    do
    {
        printf("Enter square number: ");
        scanf("%d", &n);
        
        sq = n * n;

        printf("Square of %d is %d.\n", n, sq);
        printf("Do you wish to continue.(Y/N)");
        scanf("%s", &ans);
    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}