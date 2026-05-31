#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    printf("----WELCOME TO NUMBER GUESSING GAME----\n");
    printf("You have to guess the number between 1 to 100\n");
    printf("There is no limit for guessing the number\n");
    printf("Let's begin the game!\n");

    int number, guess, nguesses = 1;
    srand(time(0)); 
    number = rand() % 100 + 1;

    do {
        printf("Guess the number between 1 to 100: ");
        while (scanf("%d", &guess) != 1) {
            while (getchar() != '\n'); 
            printf("Invalid input. Please enter a valid number between 1 and 100: ");
        }
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
        }
        else if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed it in %d attempts\n", nguesses);
            printf("Thank you for playing! Goodbye!\n");
        }
        nguesses++;
    } while (guess != number); 

    return 0;
}

