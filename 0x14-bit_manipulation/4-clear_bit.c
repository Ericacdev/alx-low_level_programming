#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: unsigned long int value .
 * @index: index, starting from 0
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int bt;

if (index > 63)
return (-1);

bt = 1 << index;

if (*n & bt)
*n ^= bt;

return (1);
}
