#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ConvertToText.h"

int main()
{   char *morsePhrase = calloc(sizeof(char), 100);
    if (morsePhrase == NULL)
        return -1;
    puts("Please enter a morse code message using / inbetween letters");
    
    scanf("%s", morsePhrase);
    
    printf("Translating %s into text\n", morsePhrase);
    char *phrase = calloc(sizeof(char), 100);
    if (phrase == NULL)
        return -1;
    
    convertToText(morsePhrase, phrase);
    printf("%s", phrase);

    free(morsePhrase);
    free(phrase);

    return (0);
}