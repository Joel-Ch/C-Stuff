#include <stdio.h>
#include <unistd.h>

void spinCursor(int repeats)
{
    printf("spinning");
    for (size_t i = 0; i < repeats; i++)
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
    
}

void ellipsis(int repeats)
{
    printf("ellipsis");
    for (size_t i = 0; i < repeats; i++)
    {
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf("\b\b\b   \b\b\b");
    }
    
}


int main(int argc, char const *argv[])
{
    spinCursor(5);
    ellipsis(5);
    return 0;
}
