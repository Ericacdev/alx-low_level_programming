#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: string value to compare
 *@s2: string value to compare
 *
 *Return: s1[i] - s2[i]
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
