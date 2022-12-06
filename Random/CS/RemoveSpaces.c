#include <stdio.h>
#include <string.h>

char* RemoveSpaces(char *phrase, char *output)
{
    printf("string: %s\n", phrase);
    for (size_t i = 0; i < strlen(phrase); i++)
    {
        // printf("h\n");
        printf("character: %c", phrase[i]);
        if(phrase[i] == 'e')
        {
            printf(" e \n");
            // output[i] = 'f';
        }
        else
        {
            // output[i] = phrase[i];
        }
    }
    printf("output: %s\n", output);
    // return output;
}

int main(int argc, char const *argv[])
{
    char *phrase, *output;
    scanf("%s", phrase);
    RemoveSpaces(phrase, output);
    printf("output2: %s\n", output);
    return 0;
}
