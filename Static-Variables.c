#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VariableTest()
{
    auto int x = 0;
    // change this static to auto
    
    printf("%i\n", x);

    x = 10;

    return;
}


int main (void )
{

    VariableTest();

    printf("Random Text\n");

    VariableTest();
}