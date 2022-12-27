#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// NB it is impossible to go back up a line in the console, so this is the most complete version possible

#define TOTALLENGTH 15
#define SIZE 50

int main(int argc, char const *argv[])
{
    // add ruler
    for (size_t i = 0; i <= TOTALLENGTH; i++)
    {
        printf("=");
    }
    printf("\n");

    // assign variables
    char input;
    char word[SIZE];
    int length = 0;
    
    // loop forever
    while(1)
    {
        // get input
        input = getch();

        // check if the word is longer than allowed length
        if (length >= TOTALLENGTH)
        {   
            if (strlen(word) >= TOTALLENGTH)
            {
                printf("\b-\n");

                length = 0;

                printf("%c", word[strlen(word)-1]);

                // memset(word, 0, strlen(word));
            }
            
            else
            {
                // remove the original word(move backwards the right length then write over it with spaces)
                for (size_t i = 0; i < strlen(word); i++)
                {
                    printf("\b");
                }
                for (size_t i = 0; i < strlen(word); i++)
                {
                    printf(" ");
                }
                // new line
                printf("\n");
                // set new length
                length = strlen(word);
                // print the word again (on the new line)
                printf("%s", word);
                // remove the word from the memory
                // memset(word, 0, strlen(word));
            }
        }

        if(input == '#')
            // end program
            return 0;
        else if(input == 8)// (backspace)
        {
            // move cursor back, write space, move cursor back again
            printf("\b \b");
            // remove last input from word
            word[strlen(word) - 1] = '\0';
            // remove one from length
            length -= 1;
        }
        else if(input == 13)// (enter)
        {
            printf("\n");
            memset(word, 0, strlen(word));
            length = 0;
        }
        else
        {
            //print the input
            printf("%c", input);
            // add one to length
            length += 1;
            //check if space
            if (input != ' ')
                // if not space add it to the word
                strncat(word, &input, 1);
            else
                // if space delete the word
                memset(word, 0, strlen(word));
        }

    }
}
