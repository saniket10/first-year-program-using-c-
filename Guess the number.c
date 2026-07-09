#include <stdio.h>

int main() {
    int secretNumber = 42;
    int guess, attempts = 5;
    int isGuessed = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have 5 chances.\n\n");

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d - Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("\nCongratulations! You guessed it right!\n");
            printf("Great job! You did it in %d attempts.\n", i);
            isGuessed = 1;
            break;
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n\n");
        } 
        else {
            printf("Too high! Try again.\n\n");
        }
    }

    if (!isGuessed) {
        printf("\nSorry! You've used all chances.\n");
        printf("The correct number was: %d\n", secretNumber);
        printf("Better luck next time!\n");
    }

    return 0;
}
    