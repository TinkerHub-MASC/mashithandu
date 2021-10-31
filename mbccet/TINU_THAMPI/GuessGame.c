#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int r = rand() % 100 + 1;
    int success = 0; 
    int guess; 
    int tries = 0; 

    printf("Guess my number!(1-100) "); 

    do {
        scanf("%d", &guess);
        if (guess == r) {
            tries++;
            printf("You guessed correctly in %d tries! Congratulations!\n", tries);
            success = 1; 
        }

        if (guess < r) {
            tries++;
            printf("Your guess is too low. \n Guess again. ");
        }

        if (guess > r) { 
            tries++; 
            printf("Your guess is too high. \n Guess again. ");
        }
    } while (success == 0);

    return 0;
}