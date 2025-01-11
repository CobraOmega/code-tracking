
//WAP
#include<stdio.h>
int main()
{
    int n, sq;
    char ans;

while(1)
{
    printf("\nEnter number for square: ");
    scanf("%d", &n);

    sq =  n * n;

    printf("Square = %d\n", sq);

    printf("Do you want to continue?(Y/N): ");
    scanf("%c",&ans);

    if(ans == 'n' || ans == 'N')
    {
        break;
    }
}
printf("Program Exited.");
    return 0;
}