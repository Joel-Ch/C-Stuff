#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ConvertToMorse.h"

int main()
{
    char *phrase = calloc(100, sizeof(char));
    if (phrase == NULL)
        return -1;

    puts("please enter an uppercase phrase");
    // NB: This V wacky symbol just means it keeps reading until it gets to a new line (so it can read spaces)
    scanf("%[^\n]", phrase);

    printf("Translating %s into morse code\n", phrase);
    char *morsePhrase = calloc(100, sizeof(char));
    if (morsePhrase == NULL)
        return -1;
    convertToMorse(phrase, morsePhrase);
    printf("%s", morsePhrase);

    free(phrase);
    free(morsePhrase);
}