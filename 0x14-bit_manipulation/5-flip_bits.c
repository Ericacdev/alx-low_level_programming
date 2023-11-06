#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: int num value.
 * @m: unsigned num value.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flipnum;
for (flipnum = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
flipnum++;
}

return (flipnum);
}
