#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints all elements of a list_t list
  * @h: linked list value
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	for (h)
	{
		printf("[%d] %s\n", h->len, h->str);
b++
		h = h->next;
	}
	return (b);
}
