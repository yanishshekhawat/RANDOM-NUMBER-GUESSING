COMPLETE C SOURCE CODE
Save the following program as guessing_game.c. It uses C language syntax only.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int secretNumber, guess, attempts = 0;
 
    srand((unsigned int)time(NULL));
    secretNumber = rand() % 100 + 1;
 
    printf("RANDOM NUMBER GUESSING GAME\n");
    printf("I have selected a number from 1 to 100.\n");
 
    do
    {
        printf("\nEnter your guess (1-100): ");
 
        if (scanf("%d", &guess) != 1)
        {
            printf("Invalid input. Enter an integer.\n");
            return 1;
        }
 
        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n");
        }
        else
        {
            attempts++;
 
            if (guess < secretNumber)
                printf("Too low. Try a higher number.\n");
            else if (guess > secretNumber)
                printf("Too high. Try a lower number.\n");
            else
            {
                printf("Congratulations! You guessed it.\n");
                printf("Valid attempts: %d\n", attempts);
            }
        }
    } while (guess != secretNumber);
 
    return 0;
}

 