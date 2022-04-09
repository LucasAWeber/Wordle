#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STRINGLEN 6
#define GUESSES 6

void readWords(char array[][STRINGLEN], char ptr[]);
int validWordCheck(char array[][STRINGLEN], char word[]);
int checkWord(char guess[STRINGLEN], char word[STRINGLEN], int guessArray[STRINGLEN-1]);
void printGuesses(int guess[STRINGLEN-1]);