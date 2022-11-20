#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
    char string[30];
    puts("please enter a string");
    scanf("%s", string);
    char *token = strtok(string, ",");
    int countVar = 0;
    while (token != NULL)
    {
        puts(token);

        token = strtok(NULL, ",");
    }
    return 0;
}