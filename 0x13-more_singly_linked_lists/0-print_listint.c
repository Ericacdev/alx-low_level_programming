#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints a linked list
 * @h:pointer of head list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}
