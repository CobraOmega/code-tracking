//WAP to find cube of a integer using functions.
#include<stdio.h>

int cube(int);

int main()
{
    int x;
    
    printf("Enter integer: ");
    scanf("%d", &x);

    cube(x);

    return 0;
}

int cube(int x)
{
    int a;
    a = x *x *x;
    printf("Cube of %d is %d ", x, a);
    return a;
}