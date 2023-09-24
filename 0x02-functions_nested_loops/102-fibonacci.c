#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	long int i, a, b, next;

	a = 1;

	b = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
else
{
			 printf("%ld\n", a);
}
		 next = a + b;
		 a = b;
		 b = next;
	}
	return (0);
}
