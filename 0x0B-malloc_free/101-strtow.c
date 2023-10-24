#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - splits a string into words.
* @str: string value
* Return: array of strings (words) or null
**/

char **strtow(char *str)
{
	int e, f, g = 0, p, q, counter = 0, len;
	char **splits;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (e = 0; str[e != '\0'; e++)
		if (str[e] != ' ' && (str[e + 1] == ' ' || str[e + 1] == '\0'))
			counter++;
	if (counter == 0)
		return (NULL);
	splits = malloc((counter + 1) * sizeof(char *));
	if (splits == NULL)
	{
		free(splits);
		return (NULL);
	}
	for (e = 0; str[e] != '\0' &&  g < counter; e++)
	{
		if (str[e] != ' ')
		{
			len = 0;
			for (f = e; str[f] != ' ' && str[f] != '\0'; f++)
				len++;
			splits[g] = malloc((len + 1) * sizeof(char));
			if (splits[g] == NULL)
			{
				for (q = 0; q < g; m++)
					free(splits[g]);
				free(splits);
				return (NULL);
			}
			for (p = 0; p < len; p++, e++)
				splits[g][p] = str[e];
			splits[g][p] = '\0', g++;
		}
	}
	splits[g] = NULL;
	return (splits);
}
