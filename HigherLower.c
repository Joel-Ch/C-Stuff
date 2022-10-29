#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int level, random, guess;

    printf("Starting game!\nPlease pick a level\n");
    scanf("%i", &level);

    random = abs((rand() % ((level*10) - (level/10) + 1)) + (level/10));

    printf("Please guess a number\n");

    do
    {
        scanf("%i", &guess);

        if (random < guess)
            printf("Guess lower\n");

        else if (random > guess)
        {
            printf("Guess higher\n");
        }
        else if (random == guess)
        {
            printf("Correct, the number was %i", random);
        }
    } while (random != guess);

    return 0;
}