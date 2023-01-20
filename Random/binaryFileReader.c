#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("%c", argv[2]);
    if (argc != 3)
    {
        printf("Invalid usage, correct use: %s <FILENAME> <number of character to be read", argv[0]);
        return 1;
    }
//     char *p = calloc(argv[2], sizeof(char));
//     FILE *fp = fopen(argv[1], "rb");
//     if (fp == NULL)
//     {
//         printf("error allocating memory, please retry");
//         return 2;
//     }
//     fread(p, sizeof(char), argv[2], fp);
//     for (size_t i = 0; i < argv[2]; i++)
//     {
//         printf("Number %2i: %c", i, p[i]);
//     }
    
//     fclose(fp);

//     free(p);

//     return 0;
}
