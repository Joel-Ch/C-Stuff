#include <stdio.h>
#include <string.h>

void printPhrase(int *phrase)
{
    printf("%i\n", phrase);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%u\n", (*phrase + i));
    }
    

    return;
}

int main(int argc, char const *argv[])
{
    int phrase;
    printf("write a phrase:");
    scanf("%i", &phrase);
    printf("phrase: %i ", phrase);
    printPhrase(*phrase);
    return 0;
}
