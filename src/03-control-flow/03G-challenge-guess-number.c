#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

#define MAX_GUESSES 5

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;

    // initialize random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21; // random number between 0 and 20

    // From the terminal, run as: ./03G-challenge-guess-number
    printf("\nThis is a guessing game.");
    printf("\nA random number between 0 and 20 has been chosen, which must be guessed.\n");

    for (numberOfGuesses = MAX_GUESSES; numberOfGuesses > 0;--numberOfGuesses) {
        printf("\nThere %s %d tr%s remaining", 
            numberOfGuesses == 1 ? "is" : "are",
            numberOfGuesses,
            numberOfGuesses == 1 ? "y" : "ies"
        );
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("\nCongratulations, guess %d is correct!\n", guess);
            break;
        } else if (guess < 0 || guess > 20) { // check for an invalid guess
            printf("Outside of range, guess a number between 0 and 20.\n");
        } else if (randomNumber > guess) {
            printf("%d is incorrect. The number is greater than that. Please try again.\n", guess);
        } else if (randomNumber < guess) {
            printf("%d is incorrect. The number is less than that. Please try again.\n", guess);
        } else {
            printf("\nMaximum allowed guesses exceeded. The number is %d\n", randomNumber);
        }
    }

    return 0;
}