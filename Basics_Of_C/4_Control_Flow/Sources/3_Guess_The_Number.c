// Guess The Number challenge


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// we need to include the time module for the random number generator seed


int main() {

    // initialize variables
    int random_number;
    int user_guess;
    int number_of_guesses;
    time_t t;

    // initialize the random number
    srand((unsigned) time(&t));

    // get the random number. the range is between 0 and 21
    random_number = rand() % 21;

    printf("Welcome to the guessing game! \n");
    printf("You have 5 chances to guess the number I have chosen between 0 and 20. \n");

    for(number_of_guesses = 5; number_of_guesses > 0; number_of_guesses--) {
        
        if(number_of_guesses == 1) {
            printf("You have 1 guess left! \n");
        } else {
            printf("You have %d guesses left! \n", number_of_guesses);
        }
        
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        if(user_guess == random_number) {
            printf("Congratulations! You guessed the correct number! \n");
            return 0;
        } else if(user_guess < 0 || user_guess > 20) {
            printf("please enter a number between 0 and 20 ");
        } else if(random_number > user_guess) {
            printf("Sorry! My number is higher than what you entered! ");
        } else if(random_number < user_guess) {
            printf("Sorry! My number is less than what you entered! ");
        }
    }

    printf("Sorry! You used up all 5 of your gusses and didn't guess the correct number. My number is: %d \n", random_number);
    
    return 0;
}
