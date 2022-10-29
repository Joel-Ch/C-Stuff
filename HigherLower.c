#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int level, random, guess;

    printf("Starting game!\nPlease pick a level\n");
    scanf("%i", &level);

    random = (rand() % ((level*10) - (level/10) + 1)) + (level/10);

    do
    {
        printf("Please guess a number\n");
        scanf("%i", &guess);
        printf("%i", guess);

        if (random < guess)
            printf("    V\n");

        else if (random > guess)
        {
            printf("    ^\n");
        }
        else if (random == guess)
        {
            printf("\nCorrect, the number was %i", random);
        }
    } while (random != guess);

    return 0;
}