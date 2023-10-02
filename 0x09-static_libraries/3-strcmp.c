#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string value
 * @s2: string value
 *
 * Return: s1 < s2, 0 if = .
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
