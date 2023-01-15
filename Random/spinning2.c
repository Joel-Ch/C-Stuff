#include "waits.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("waiting");
    for (size_t i = 0; i < 5; i++)
    {
        ellipsis();
    }
    printf("waited enough\n");
    printf("haha\n");
    printf("waiting again!");
    for (size_t i = 0; i < 5; i++)
    {
        spinCursor();
    }
    printf("now we're finished");

    return 0;
}
