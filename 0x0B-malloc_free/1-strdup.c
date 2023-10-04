#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer ,NULL if str = NULL
 */
char *_strdup(char *str)
{
char *a;
unsigned int i, l;

i = 0;
l = 0;

if (str == NULL)
return (NULL);

while (str[l])
l++;

a = malloc(sizeof(char) * (l + 1));

if (a == NULL)
return (NULL);

while ((a[i] = str[i]) != '\0')
i++;

return (a);
}
