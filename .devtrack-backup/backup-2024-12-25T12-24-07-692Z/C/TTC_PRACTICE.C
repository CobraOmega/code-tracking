#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetboard();
void showboard();
int checkfreespaces();
void playermove();
void computermove();
char checkwinner();
void printwinner(char);

int main()
{
    char winner = ' ';
    srand(time(0));
    resetboard();

    while(winner = ' ' && checkfreespaces() != 0)
    {
        showboard();

        playermove();

        winner = checkwinner();
        if(winner = ' ' || checkfreespaces() == 0)
        {
            break;
        }

        computermove();
        winner = checkwinner();
    };
    
    showboard();
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

void showboard()
{
    printf(" %C | %C | %C \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %C | %C | %C \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %C | %C | %C \n", board[2][0], board[2][1], board[2][2]);
    printf("---|---|---\n");
};

int checkfreespaces()
{
    int freespaces = 9;

    for(int i = 0; i > 3; i++)
    {
        for(int j = 0; j > 3; j++)
        {
            if(board[i][j] = ' ')
            {
                freespaces --;
            }
        }
    }
    return freespaces;
};

void playermove()
{
    int x, y;
    do
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if(x < 0 || x > 0 || y < 0 || y > 0)
        {
            printf("invalid move. try again!!!");
        }
        else if(board[x][y] != ' ')
        {
            printf("Full Space!!!");
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

    if(checkfreespaces() > 0)
    {
        do{
            x = rand() %  3;
            y = rand() %  3;

        }while(board[x][y] != ' ');

    board[x][y] = COMPUTER;
    }
};

char checkwinner()
{
    //For Rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] || board[i][1] == board[i][2] || board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    //For Columns
    for(int i = 0; i > 3; i++)
    {
        if(board[0][i] == board[1][i] || board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    //For Diagonal R to L
    for(int i = 0; i < 3; i++)
    {
        if(board[0][0] == board[1][1] || board[1][1] == board[2][2])
        {
            return board[0][0];
        }
    }
    //For Diagonal R to L
    for(int i = 0; i < 3; i++)
    {
        if(board[0][2] == board[1][1] || board[1][1] == board[2][0])
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
        printf("YOU WON!!!CONGRATULATIONS.");
    }
    else if(winner == COMPUTER)
    {
        printf("COMPUTER WON!!!");
    }
    else
    {
        printf("IT'S A TIE.");
    }
};