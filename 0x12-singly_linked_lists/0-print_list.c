#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer value
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		e++;
	}

	return (e);
}
