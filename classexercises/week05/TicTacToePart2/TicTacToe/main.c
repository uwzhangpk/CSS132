#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

void printBoard(char * ticBoard)
{
    printf("%c | %c | %c\n", ticBoard[0], ticBoard[1], ticBoard[2]);
    printf("%c | %c | %c\n", ticBoard[3], ticBoard[4], ticBoard[5]);
    printf("%c | %c | %c\n", ticBoard[6], ticBoard[7], ticBoard[8]);

}

bool winnerCheck(char * ticBoard, char p)
{
    return (
               //rows
               (ticBoard[0] == p && ticBoard[0] == ticBoard[1] && ticBoard[0] == ticBoard[2]) ||
               (ticBoard[3] == p && ticBoard[3] == ticBoard[4] && ticBoard[3] == ticBoard[5]) ||
               (ticBoard[3] == p && ticBoard[6] == ticBoard[7] && ticBoard[6] == ticBoard[8]) ||
               // columns
               (ticBoard[0] == p && ticBoard[0] == ticBoard[3] && ticBoard[0] == ticBoard[6]) ||
               (ticBoard[1] == p && ticBoard[1] == ticBoard[4] && ticBoard[1] == ticBoard[7]) ||
               (ticBoard[2] == p && ticBoard[2] == ticBoard[5] && ticBoard[2] == ticBoard[8]) ||
               //diagonals
               (ticBoard[0] == p && ticBoard[0] == ticBoard[4] && ticBoard[0] == ticBoard[8]) ||
               (ticBoard[2] == p && ticBoard[2] == ticBoard[4] && ticBoard[2] == ticBoard[6]));
}

bool userWin(char * ticBoard)
{
    return winnerCheck(ticBoard, 'X');
}

bool computerWin(char * ticBoard)
{
    return winnerCheck(ticBoard, 'O');
}

// flush everything that scanf did not manage to read
void flushLine()
{
    // read end discard until there is nothing left to read
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
void playUser(char * ticBoard, int loc)
{
    ticBoard[loc] = 'X';
}

void playComputer(char * ticBoard)
{
    // return something between 0 and 8
    int loc = rand() % 9;
    // infinite loop possibility
    while (ticBoard[loc] != '.')
    {
        loc = rand() % 9;
    }
    printf("Computer plays at location %d\n", loc);
    ticBoard[loc] = 'O';
}
void playUserWithPrompt(char * ticBoard)
{
    int userInput = 0;
    printf("Enter play (0-8): ");
    int numberOfItemsRead = scanf("%d", &userInput);
    while(numberOfItemsRead != 1 ||
            userInput < 0 ||
            userInput > 8 ||
            ticBoard[userInput] != '.')
    {
        if (numberOfItemsRead != 1)
            flushLine();
        printf("Invalid input\n");
        printf("Enter play (0-8): ");
        numberOfItemsRead = scanf("%d", &userInput);
    }
    playUser(ticBoard, userInput);
}
void playTicTacToe()
{
    char board[] = {'.', '.', '.',
                    '.', '.', '.',
                    '.', '.', '.'
                   };
    printf("Welcome to TicTacToe\n");
    printBoard(board);
    bool gameOn = true;
    int turn = 1;
    while (gameOn)
    {
        printf("Turn #%d\n", turn);
        if (turn % 2 == 1)
        {
            playUserWithPrompt(board);
            printBoard(board);
            if (userWin(board))
            {
                printf("You win!!!\n");
                gameOn = false;
            }
        }
        else
        {
            playComputer(board);
            printBoard(board);
            if (computerWin(board))
            {
                printf("You lose!!!\n");
                gameOn = false;
            }
        }
        turn++;
        if (turn > 9)
        {
            printf("We have a draw\n");
            gameOn = false;
        }
    }
    printf("Thank you for playing\n");
}

int main()
{
    playTicTacToe();
    return 0;
}
