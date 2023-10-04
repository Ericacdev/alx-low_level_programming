#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string value
 * @s2: string value
 *
 * Return: pointer to the new memory space,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, k1 = 0, k2 = 0;

	while (s1 && s1[k1])
		k1++;
	while (s2 && s2[k2])
		k2++;

	s3 = malloc(sizeof(char) * (k1 + k2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < k1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (k1 + k2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
