#include <stdio.h>

int test(char c)
{
    int d;
    if (c == 'd')
    {
        printf("d");
        d = 1;
    }
    else
        printf("not d");
    d = 0;

    return d;
}

int main(int argc, char const *argv[])
{
    char c;
    scanf("%c", &c);
    int d = test(c);
    printf("%d", d);

    return 0;
}
