#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomnum;

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomnum = (rand() % 100) + 1;

    int num_of_gueses = 0;
    int guessed;

    do {   
        printf("Guess the random number: ");
        scanf("%d", &guessed);

        if (guessed > randomnum) {
            printf("Lower number please\n");
        } 
        else if (guessed < randomnum) {
            printf("Higher number please\n");
        }

        num_of_gueses++;

    } while (guessed != randomnum);

    printf("Congratulations! Tum safal huye\n");
    printf("Wo bhi %d attempts me\n", num_of_gueses);

    return 0;
}



