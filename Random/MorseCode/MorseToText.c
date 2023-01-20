#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ConvertToText.h"

int main()
{
    char *morsePhrase = calloc(100, sizeof(char));
    if (morsePhrase == NULL)
        return -1;
    puts("Please enter a morse code message using / inbetween letters");
    
    scanf("%s", morsePhrase);
    
    printf("Translating %s into text\n", morsePhrase);
    char *phrase = calloc(100, sizeof(char));
    if (phrase == NULL)
        return -1;
    
    convertToText(morsePhrase, phrase);
    printf("%s", phrase);

    free(morsePhrase);
    free(phrase);

    return (0);
}