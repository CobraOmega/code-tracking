//WAP to calculate sum and average of 1-10 using for loop
#include<stdio.h>

int main()
{
    int sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("%d\n",i);
    }
    printf("sum is %d", sum);

    int avrg = sum / 10;
    printf("\nAverage is %d", avrg);

    return 0;
}