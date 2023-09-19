#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */
void rev_string(char *s)
{
char tmp;
int i, rev, rev1;
rev = 0;
rev1 = 0;
while (s[rev] != '\0')
{
rev++;
}
rev1 = rev - 1;
for (i = 0; i < rev / 2; i++)
{
tmp = s[i];
s[i] = s[rev1];
s[rev1--] = tmp;
}
}
