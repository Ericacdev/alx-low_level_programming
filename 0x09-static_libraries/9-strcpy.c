#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: pointer to the buffer
 * @src: string to  copy
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

