//NUMBER GUESSING GAME...
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess, answer, chances = 10;/*the number of chances are predetermined to 10.*/; 
    int attempts = 0;
    printf("***********************************\n");
    printf("WELCOME TO NUMBER GUESSING GAME!!!!\n");
    printf("***********************************\n");

    srand(time(0)); //for generating random number...

    answer = (rand() % 100) + 1;  //Random number...

    while(chances > 0)
    {
        printf("Enter a number between 1 - 100.\n");
        scanf("%d", &guess);  //takes number of choice

        if(guess < 1 || guess > 100)
        {
             printf("Invalid input! Please enter a number between 1 and 100.\n");
            continue;
        }   

        if(guess > answer)
        {
            printf("You have choosen a bigger number!!\n");
            chances--;
            attempts++;
            printf("You have %d chances.\n", chances);
        }

        else if(guess < answer)
        {
            printf("You have choosen a smaller number!\n");
            chances--;
            attempts++;
            printf("You have %d chances.\n", chances);
        }

        else
        {
            printf("CONGRATULATIONS YOU HAVE FOUND THe RIGHT NUMBER!!!\n");
            printf("You took %d chances.\n", attempts + 1);
            return 0;
        }
    }
    if(chances == 0)
    {
        printf("YOU LOST!!!\n");
        printf("BETTER LUCK NEXT TIME.\n");
        printf("Number was %d\n ", answer);
    }

    return 0;
}