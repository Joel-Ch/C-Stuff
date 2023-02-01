#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Invalid usage, correct use: %s <FILENAME> <number of character to be read", argv[0]);
        return 1;
    }
    char *cha;
    long size = strtol(argv[2], &cha, 10);
    char *p = calloc(size, sizeof(char));
    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        printf("error allocating memory, please retry");
        return 2;
    }
    fread(p, sizeof(char), size, fp);
    for (size_t i = 0; i < size; i++)
    {
        printf("Number %2i: %c\n", i, p[i]);
    }
    
    fclose(fp);

    free(p);

    return 0;
}
