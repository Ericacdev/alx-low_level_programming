#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b:string value
 * Return: The converted number or 0 if 1+ chars in string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int uib = 0;

while (b && *b)
{
if (*b == '0' || *b == '1')
uib = ((uib << 1) | (*b++ - '0'));
else
return (0);
}
return (uib);
}
