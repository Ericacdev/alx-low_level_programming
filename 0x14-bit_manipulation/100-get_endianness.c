#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
int check;
check = 1;
if (*(char *)& check == 1)
return (1);
else
return (0);
}
