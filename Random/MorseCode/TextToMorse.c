#include <stdio.h>
#include <string.h>
#include "ConvertToMorse.h"

int main()
{   char phrase[500];

    puts("please enter an uppercase phrase");
    // NB: This V wacky symbol just means it keeps reading until it gets to a new line (so it can read spaces)
    scanf("%[^\n]", &phrase);

    printf("Translating %s into morse code\n", phrase);
    char morsePhrase[200];
    convertToMorse(phrase, morsePhrase);
    printf("%s", morsePhrase);
}