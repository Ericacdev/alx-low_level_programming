#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list value
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t value = 0;
while (h)
{
value++;
h = h->next;
}
return (value);
}
