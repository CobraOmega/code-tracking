#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';


void resetboard();
void printboard();
int checkfreespace();
void playermove();
void computermove();
char checkwinner();
void printwinner(char);

int main()
{
    char winner = ' ';
    srand(time(0));
    resetboard();

    while(winner == ' ' && checkfreespace() != 0)
    {
        printboard();

        playermove();
        winner = checkwinner();
        if(winner != ' ' || checkfreespace() == 0)
        {
            break;
        }

        computermove();
        winner = checkwinner();
    };
    
        printboard();
        printwinner(winner);
    
    return 0;
}

void resetboard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
};

void printboard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
};

int checkfreespace()
{
    int freespace = 9;

    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            if (board[i][j] != ' ')
            {
                freespace --;
            }
        }
    }
    return freespace;
};

void playermove()
{
    int x ,y;

    do
    {
        scanf("%d", &x);
        scanf("%d", &y);
        x--;
        y--;
    
        if(x < 0 || x > 2 || y < 0 || y > 2)
            {
                printf("Invalid move! Try again.\n");
            }
        else if(board[x][y] != ' ')
        {
            printf("Full Space!!!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    }while(board[x][y] != ' ');
};

void computermove()
{
    int x, y;
    
    if(checkfreespace() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        }while(board[x][y] != ' ');

    board[x][y] = COMPUTER;
    }
};

char checkwinner()
{
    //for rows
    for(int i = 0; i < 3 ; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }

    //for columns
    for(int i = 0; i < 3 ; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    //for diagonal L TO R
    for(int i = 0; i < 3 ; i++)
    {
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            return board[0][0];
        }
    }
    //for diagonal R TO L
    for(int i = 0; i < 3 ; i++)
    {
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            return board[0][2];
        }
    }

    return ' ';
};

void printwinner(char winner)
{
    if(winner == PLAYER)
    {
        printf("YOU WON!!!");
    }
    else if(winner == COMPUTER)
    {
        printf("COMPUTER WON!!!");
    }
    else
    {
        printf("It's a Tie!!!");
    }
};
