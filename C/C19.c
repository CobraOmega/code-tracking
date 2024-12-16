/*
Def. of loop --> program may be repeated inc certain no. of times is called loop
STRUCTURE OF LOOP
1. initialization
2. condiion
3. reinitialization
    1. increment(++)
    2. decrement(--)
TYPES OF LOOP
1. for loop
2. while loop
3. do while loop
*/

//wap to print 1 to 20 using for loop
/*#include<stdio.h>

int main()
{
    for(int i = 1; i <= 20; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}*/
//now reverse

#include<stdio.h>

int main()
{
    for(int i = 20; i >= 1; i--)
    {
        printf("%d\n",i);
    }

    return 0;
}