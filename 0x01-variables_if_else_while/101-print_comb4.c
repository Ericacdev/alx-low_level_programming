#include <stdio.h>

/**
 *main - prints all possible different combinations of three digits
 *Return: Always 0
 */
int main(void)
{
int n, o, p;

for (n = 48; n < 58; n++)
{
for (o = 49; o < 58; o++)
{
for (p = 50; p < 58; p++)
{
if (p > o && o > n)
{
putchar(n);
putchar(o);
putchar(p);
if (n != 55 || o != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
