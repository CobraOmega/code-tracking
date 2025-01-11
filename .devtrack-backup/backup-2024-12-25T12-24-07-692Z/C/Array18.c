//WAP to sort an array
#include<stdio.h>

void sort(int a[], int s)
{
    int temp;
    for(int i = 0; i < s - 1; i++)
    {
        for(int j = 0; j < s - i - 1; j++)
        {
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            
        }
    }
};

int main()
{
    int s, i;

    printf("Enter size of an array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter elements of the array: ");
    for(i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, s);

    printf("Sorted array:\n");

    for(i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
