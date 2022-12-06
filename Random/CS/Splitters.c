#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char phrase[50];//input phrase
    char result[50][50] = {0};//output 2D array (i dont know what linked lists are)
    int outputCounter = 0;//counts through the output array
    bool opLast = false;//dis/allows operators to be entered by themselves

    printf("please enter a string\n");//user input
    scanf("%s", &phrase);

    for (size_t inputCounter = 0; inputCounter < strlen(phrase); inputCounter++)//counts through each character in the input string
    {
        if ((phrase[inputCounter] == '-')&&(opLast == false))//check if - and if operators are allowed
        {
            outputCounter++;//start new word
            
            strcpy(result[outputCounter], "-");//copy "-" into new word
            
            outputCounter++;//go to next word
            
            opLast = true;//disallow operators
        }
        else if ((phrase[inputCounter] == '+')&&(opLast == false))//check if + and if operators are allowed
        {
            outputCounter++;//start new word

            strcpy(result[outputCounter], "+");//copy "+" into new word
            
            outputCounter++;//go to next word
            
            opLast = true;//disallow operators
        }
        else
        {
            char letter[2];
            letter[0] = phrase[inputCounter];
            letter[1] = '\0';//typecasting a character to a string because strcat is a bitch

            strcat(result[outputCounter], letter);//add the character to the end of the word

            opLast = false;//allow operators again
        }
    }

    printf("done!\n");

    for (size_t i = 0; i < 20; i++)//printing the array for demonstration purposes
    {
        printf("%s\n", result[i]);
    }

    return 0;
}
