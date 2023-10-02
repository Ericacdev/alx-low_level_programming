#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int value to check
 * Return: 1 if c is a digit or else 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}