#include <stdio.h>
#include <string.h>

void printPhrase(char *phrase)
{
    printf("%s\n", phrase);
    char *ptr = phrase;
    char **output;
    int counter = 0;
    // for (size_t i = 0; i < strlen(phrase); i++)
    // {
    //     // printf("%c ", phrase[i]);
    //     if (phrase[i] == 'e')
    //     {
    //         phrase[i] = 'f';
    //     }
    // }
    for (size_t i = 0; i < strlen(phrase); i++)
    {
        printf("%c ", *(ptr + i));
        if (*(ptr+i) == 'f')
        {
            output[counter] = "g";
            counter++;
            printf("f!\n");
            *(ptr + i) == 'g';
        }
        
    }
    printf("%s", phrase);
    

    return;
}

int main(int argc, char const *argv[])
{
    char *phrase;
    printf("write a phrase:");
    scanf("%s", phrase);
    printf("phrase: %s ", phrase);
    printPhrase(phrase);
    return 0;
}
