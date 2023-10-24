#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer value
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t m = 0;
int p;
listint_t *tmp;

if (!h || !*h)
return (0);

while (*h)
{
p = *h - (*h)->next;
if (p > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
m++;
}
else
{
free(*h);
*h = NULL;
m++;
break;
}
}
*h = NULL;
return (m);
}
