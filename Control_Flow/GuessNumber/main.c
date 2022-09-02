#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main()
{
    // BASE EXAMPLE OF FOR-LOOP
    //int i = 0;
    //int j = 2;
    /*
    for(int i=1, j=2 ; i <= 5; ++i, j += 2)
    {
        printf(" %d", i*j);
    }
    return 0;
    */

    // -------------------------------------------------------------------

    // Actual Challenge

    // Generate random number

    int randomNumber = 0;
    int guesses = 5;
    int userGuess = 0;
    time_t t;


    //Initialize random number
    srand((unsigned) time(&t));

    // Get the random number
    randomNumber = rand() % 21;

    // Guess game intro
    printf("\nPlease enter a number that is 0-20: ");


    for(; guesses > 0; --guesses)
    {
        // ternary operator
        printf("You have %i tr%s left.", guesses, guesses == 1 ? "y" : "ies");
        printf("\nEnter a number: ");
        scanf("%d", &userGuess);


        if (userGuess > 20 || userGuess < 0)
        {
            printf("Number has to be between 0 and 20, dumb ass.\n");
            guesses += 1;
        }
        else if (userGuess == randomNumber)
        {
            printf("\n%d is the correct number!", userGuess);
            return 0;
        }


        else if (userGuess > randomNumber)
        {
            printf("\n%d is too high. Guess again!\n", userGuess);
        }


        else
        {
            printf("\n%d is too low. Guess again!\n", userGuess);
        }
    }
    printf("You failed. LOL");


    return 0;


}
