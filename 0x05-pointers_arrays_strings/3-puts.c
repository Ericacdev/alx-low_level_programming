#include "main.h"
/**
 *   _puts - prints a string, followed by a new line, to stdout
 *  @str: string to print
 *  */
void _puts(char *str)
{
	 while (*str != '\0')
		 {
			 _putchar(*str++);
			 }
	 _putchar('\n');
}





#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: integer to swap
 *@b: integer to swap
 */
void swap_int(int *a, int *b)
{
int m;	 
d = *a;
*a = *b;
*b = d;
}
