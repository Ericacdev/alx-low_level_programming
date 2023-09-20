#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string value to input
 * @src: input value
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int a,b;
a = 0;
b = 0;
while (dest [a] != '\0')
a++
while (src [b] != '\0')
{
dest [a] = src [b];
a++;
b++;
}
dest [a] = '\0';
return (dest);
}
