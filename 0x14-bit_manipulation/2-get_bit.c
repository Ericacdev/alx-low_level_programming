#include "main.h"
#include <stdio.h>
/**
 * get_bit - return value of a bit at a given index
 * @n: int number value
 * @index: index starting from 0, of the bit
 * Return: Value of bit at index, or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int given;

if (index > 64)
return (-1);

given = n >> index;

return (given & 1);
}
