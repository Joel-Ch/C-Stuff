#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fibbEnd, loopCounter, one, two, total, i;

    printf("Enter start value\n");
    scanf("%i", &fibbEnd);
    if (fibbEnd == 0 || fibbEnd == 1)
    {
        printf("Fibonnaci number is 1/n");
    }
    else if (fibbEnd > 1)
    {
        one = two = 1;
        printf("Fibonacci Number 1 is 1\n");
        printf("Fibonacci Number 2 is 1\n");
        
        for (loopCounter = 3; loopCounter <= fibbEnd; loopCounter++)
        {
            total = one + two;
            printf("Fibonacci Number %i is %i\n", loopCounter, total);
            two = one;
            one = total;
        }
    }

    return 0;
}