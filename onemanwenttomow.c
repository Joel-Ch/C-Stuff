#include <stdlib.h>
#include <stdio.h>

int Line3(int count)
{
    for (count; count > 1; count--)
        printf("%i men, ", count);

    printf("1 man and his dog spot");
    
    return 0;
}

int main(void)
{
    int BigCount;
    printf("enter your start value\n");
    scanf("%i", &BigCount);

    for ( BigCount; BigCount > 1; BigCount--)
    {
        printf("%i men went to mow\nwent to mow a meadow\n", BigCount);
        Line3(BigCount);
        printf("\nwent to mow a meadow\n\n");
    }

    printf("%i man went to mow\nwent to mow a meadow\n", BigCount);
    Line3(BigCount);
    printf("\nwent to mow a meadow\n\n");
}

