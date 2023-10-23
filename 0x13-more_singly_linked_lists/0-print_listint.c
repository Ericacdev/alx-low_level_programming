#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints a linked list
 * @h: pointer of head lost
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elem++;
		h = h->next;
	}

	return (elem);
}
