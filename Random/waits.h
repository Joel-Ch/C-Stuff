#include <stdio.h>
#include <unistd.h>

void spinCursor()
{
    printf("\b|");
    sleep(1);
    printf("\b/");
    sleep(1);
    printf("\b-");
    sleep(1);
    printf("\b\\");
    sleep(1);
}

void ellipsis()
{
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf("\b\b\b   \b\b\b");
}