#include <stdio.h>
#include <string.h>
#include "ConvertToText.h"

int main()
{   char morsePhrase[50];
    
    puts("Please enter a morse code message using / inbetween letters");
    
    scanf("%s", &morsePhrase);
    
    printf("Translating %s into text\n", morsePhrase);
    char phrase[200] = {0};
    convertToText(morsePhrase, phrase);
    printf("%s", phrase);

    return (0);
}