#include "main.h"
/**
 *puts_half - prints half of a string
 *followed by a new line
 *@str: string to be printed
 */
void puts_half(char *str)
{
int half, n, i;
half = 0;
while (str[half] != '\0')
{
half++;
}
if (half % 2 == 0)
{
for (i = half / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (half % 2)
{
for (n = (half - 1) / 2; n < half - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
