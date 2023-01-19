#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeSpaces(char *p)
{
    int i = 0, j = 0;
    while(i < strlen(p))
    {
        if (p[i] != ' ')
        {
            p[j++] = p[i];
        }
        i++;
    }
    p[j] = '\0';
    return;
}

int checkForDoubles(char *p)
{
    int count = 0;
    for (size_t i = 0; i < strlen(p); i++)
    {
        if (*(p+i) == *(p+i+1))
        {
            count += 1;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char *p = calloc(sizeof(char),100);
    if (p == NULL)
    {
        return -1;
    }
    scanf("%[^\n]", p);
    printf("original: %s\n", p);
    removeSpaces(p);
    int count = checkForDoubles(p);
    printf("no spaces: %s\n%i doubles found", p, count);
    free(p);
    return 0;

}