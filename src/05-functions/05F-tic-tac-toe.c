#include <stdio.h>
#include <stdlib.h>
// #include <conio.h> -- for Windows only, use system("cls") for UNIX instead

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int gameStatus;
    char mark;
    player = 1;

    // From the terminal, run as: ./05E-tic-tac-toe
    do {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", & choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);

        gameStatus = checkForWin();

        player++;
    } while (gameStatus == -1);

    displayBoard(); // show final move
    if (gameStatus == 1) {
        printf("-->\aPlayer %d wins!\n", --player);
    } else {
        printf("-->\aGame draw.\n");
    }

    return 0;
}

/*
*  checkForWin() determines the game result: 
*  returns 1 if game over with result,
*  -1 if in progress,
*  0 if game over with no result
*/
int checkForWin()
{
    if (
        // rows
        square[1] == square[2] && square[2] == square[3] ||
        square[4] == square[5] && square[5] == square[6] ||
        square[7] == square[8] && square[8] == square[9] ||
        // columns
        square[1] == square[4] && square[4] == square[7] ||
        square[2] == square[5] && square[5] == square[8] ||
        square[3] == square[6] && square[6] == square[9] ||
        // diagonals
        square[1] == square[5] && square[5] == square[9] ||
        square[3] == square[5] && square[5] == square[7]
    ) {
        return 1;
    } else if (
        square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' &&
        square[7] != '7' && square[8] != '8' && square[9] != '9'
    ) {
        return 0;
    } else {
        return -1;
    }
}

/* 
*  displayBoard() draws the board with players' marks
*/
void displayBoard()
{
    system("clear"); // clears console screen
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}

/*
*  markBoard() sets the board with the correct character, x or o
*/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1') {
        square[1] = mark;
    } else if (choice == 2 && square[2] == '2') {
        square[2] = mark;
    } else if (choice == 3 && square[3] == '3') {
        square[3] = mark;
    } else if (choice == 4 && square[4] == '4') {
        square[4] = mark;
    } else if (choice == 5 && square[5] == '5') {
        square[5] = mark;
    } else if (choice == 6 && square[6] == '6') {
        square[6] = mark;
    } else if (choice == 7 && square[7] == '7') {
        square[7] = mark;
    } else if (choice == 8 && square[8] == '8') {
        square[8] = mark;
    } else if (choice == 9 && square[9] == '9') {
        square[9] = mark;
    } else {
        printf("Invalid move. Please try again.\n");
        player--;
        // getch(); -- via conio.h, for Windows only
        system("clear");
    }
}