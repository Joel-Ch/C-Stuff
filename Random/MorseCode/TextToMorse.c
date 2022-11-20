#include <stdio.h>
#include <string.h>

int main()
{
    char text[36] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

    char morse[36][7] = {".-", "-...", "-.-.", "-..", ".", "..-", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--....", "---..", "----.", "-----"};

    char phrase[500];

    puts("please enter an uppercase phrase");
    // NB: This V wacky symbol just means it keeps reading until it gets to a new line (so it can read spaces)
    scanf("%[^\n]", &phrase);

    printf("Translating %s into morse code\n", phrase);

    for (int i = 0; i < strlen(phrase); ++i)
    {
        for (int counter = 0; counter < 36; counter++)
        {
            if (phrase[i] == text[counter])
            {
                printf("%s ", morse[counter]);
            }
        }
    }
}