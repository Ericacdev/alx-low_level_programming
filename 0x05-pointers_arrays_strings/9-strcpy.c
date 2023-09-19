#include "main.h"
/**
 **_strcpy - copies the string pointed to by src
 *including the terminating null byte (\0)
 *to the buffer pointed to by dest
 *@dest: pointer to the buffer to  copy the string
 *@src: string to be copied
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int cp, i;
cp = 0;
while (src[cp] != '\0')
{
cp++;
}
for (i = 0; i < cp; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
