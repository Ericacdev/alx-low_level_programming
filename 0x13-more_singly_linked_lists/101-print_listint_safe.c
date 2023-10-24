#include "lists.h"
/**
 * print_listint_safe -prints a linked list
 * @head: pointer to node of the linked list
 * Return: nodes in a linked list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *safe = NULL;
const listint_t *zone = NULL;
size_t c = 0;
size_t node;

safe = head;
while (safe)
{
printf("[%p] %d\n", (void *) safe, safe->n);
c++;
safe = safe->next;
zone = head;
node = 0;
while (node < c)
{
if (safe == zone)
{
printf("-> [%p] %d\n", (void *) safe, safe->n);
return (c);
}
zone = zone->next;
node++;
}
if (!head)
exit(98);
}
return (c);
}
