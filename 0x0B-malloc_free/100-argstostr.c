#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac:  argument count value
 * @av: vector pointer
 *
 * Return: Always success
 */
char *argstostr(int ac, char **av)
{
int  cd, a, m = 0, p = 0;
char *q;
if (ac == 0 || av == NULL)
return (NULL);
while (a < ac)
{
while (av[a][m])
{
cd++;
m++;
}
m = 0;
a++;
}
q = malloc((sizeof(char) * cd) +ac + 1);
a = 0;
while (av[a])
{
while (av[a][m])
{
q[p] = av[a][m];
p++;
m++;
}
s[p] = '\n';
a = 0;
p++;
a++;
}
p++;
q[p] = '\0';
return (q);
}
