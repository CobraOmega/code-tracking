//WAP to find vovel and consonant
#include<stdio.h>
#include<conio.h>

void main()
{
    char x;
    printf("Enter a Character: ");
    scanf("%ch", &x);

    if(x == 'a' ||x == 'e' ||x == 'i' ||x == 'o' ||x == 'u')
    {
        printf("The character is vovel.");
    }
    else
    printf("The character is consonant");
    getch();
}