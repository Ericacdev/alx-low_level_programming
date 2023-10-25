#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
/**
 * **strtow - splits a string into words
 * @str: string  value
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int numWords = 0;
    char **words = NULL;
    char *count = strtok(str, " ");

    while (count != NULL) {
        numWords++;
        words = (char **)realloc(words, sizeof(char *) * numWords);
        if (words == NULL) {
            return NULL;
        }
        words[numWords - 1] = count;
        count = strtok(NULL, " ");
    }

    numWords++;
    words = (char **)realloc(words, sizeof(char *) * numWords);
    if (words == NULL) {
        return NULL;
    }
    words[numWords - 1] = NULL;

    return words;
}
