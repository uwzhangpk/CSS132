#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void printBoard(char * ticBoard)
{
    printf("%c | %c | %c\n", ticBoard[0], ticBoard[1], ticBoard[2]);
    printf("%c | %c | %c\n", ticBoard[3], ticBoard[4], ticBoard[5]);
    printf("%c | %c | %c\n", ticBoard[6], ticBoard[7], ticBoard[8]);

}

void playUser(char * ticBoard, int loc)
{
    ticBoard[loc] = 'X';
}

void playTicTacToe()
{
    char board[] = {'.', '.', '.',
                    '.', '.', '.',
                    '.', '.', '.'
                   };
    printf("Welcome to TicTacToe\n");
    printBoard(board);
    int userInput = 0;
    int turn = 1;
    while (turn < 9)
    {
        printf("Enter play (0-8): ");
        int numberOfItemsRead = scanf("%d", &userInput);
        assert (numberOfItemsRead == 1);
        assert (userInput >= 0 && userInput <= 8);
        playUser(board, userInput);
        printBoard(board);
        turn++;
    }
    printf("Thank you for playing\n");
}
int main()
{
    playTicTacToe();
    return 0;
}
