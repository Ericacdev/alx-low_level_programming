#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string value
 * @s2: string value
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer or else NULL upon failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k1 = 0, k2 = 0;

	while (s1 && s1[k1])
		k1++;
	while (s2 && s2[k2])
		k2++;

	if (n < k2)
		s = malloc(sizeof(char) * (k1 + n + 1));
	else
		s = malloc(sizeof(char) * (k1 + k2 + 1));

	if (!s)
		return (NULL);

	while (i < k1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < k2 && i < (k1 + n))
		s[i++] = s2[j++];

	while (n >= k2 && i < (k1 + k2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
