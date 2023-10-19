#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("%d\n", h->len, h->str);

		e++;
		h = h->next;
	}

	return (e);
}
