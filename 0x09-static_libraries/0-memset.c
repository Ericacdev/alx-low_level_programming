#include "main.h"

/**
 * *_memset -  memory filled with a constant byte
 * @s: placeholder/ memory area that is filled
 * @b: value to copy
 * @n: number of times
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
