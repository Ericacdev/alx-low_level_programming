#include "main.h"
/**
 *puts2 - prints every other character of a string
 *followed by a new line
 *@str: string to print the char
 */
void puts2(char *str)
{
int ch, i;
ch = 0;
while (str[ch] != '\0')
{
ch++;
}
for (i = 0; i < ch; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
