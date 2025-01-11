//WAP to use break in for loop
/*
#include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        break;
        printf("%d\n",i);
    }

    return 0;
}
*/

//WAP to use continue in for loop
#include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        continue;
        printf("%d\n",i);
    }

    return 0;
}