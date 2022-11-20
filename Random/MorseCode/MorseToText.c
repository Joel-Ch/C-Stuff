#include <stdio.h>
#include <string.h>

int main()
{
    char text[36] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char morse[36][7] = {".-", "-...", "-.-.", "-..", ".", "..-", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--....", "---..", "----.", "-----"};

    char morsePhrase[50];
    puts("please enter a morse code message using / inbetween letters");
    scanf("%s", &morsePhrase);

    /* get the first token */
    char *morseWord = strtok(morsePhrase, "/");

    /* walk through other tokens */
    while (morseWord != NULL)
    {
        for (int counter = 0; counter < 36; counter++)
        {
            if (strcmp(morseWord, morse[counter]) == 0)
            {
                printf("%c", text[counter]);
            }
        }
        morseWord = strtok(NULL, "/");
    }

    return (0);
}