#include "header.h"

int main()
{
    char validWordsArray[12973][STRINGLEN];
    char wordAnswersArray[2316][STRINGLEN];
    char wordGuess[STRINGLEN];
    char word[STRINGLEN];
    int guessArray[STRINGLEN-1];
    int guesses = GUESSES;

    srand(time(0));

    readWords(validWordsArray, "valid-wordle-words.txt");
    readWords(wordAnswersArray, "wordle-answers-alphabetical.txt");

    strcpy(word, wordAnswersArray[rand() % 2315]);
    //printf("%s\n", word);

    while (guesses > 0)
    {
        scanf("%s", wordGuess);
        if (validWordCheck(validWordsArray, wordGuess))
        {
            if (checkWord(wordGuess, word, guessArray) == 1)
            {
                printGuesses(guessArray);
                printf("You got the word!\n");
                break;
            }
            else
            {
                printGuesses(guessArray);
                guesses--;
            }
        }
    }
    printf("The word was %s!\n", word);

    return 0;
}