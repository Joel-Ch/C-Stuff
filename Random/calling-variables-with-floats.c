#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VariableTest(float y)
{
    
    float x = y+2;
    printf("%f", x);

    return;
}


int main (void)
{


    float x = 3.4;

    VariableTest(x);
}