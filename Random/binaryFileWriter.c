#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Invalid usage, correct use: %s <FILENAME> <string to write>", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "wb");
    if (fp == NULL)
    {
        printf("error allocating memory, please retry");
        return 2;
    }
    fwrite((char*)argv[2], sizeof(char), strlen((char*)argv[2])+1, fp);

    fclose(fp);
    
    printf("written, exiting");

    return 0;
}
