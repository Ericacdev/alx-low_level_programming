#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list value
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *dwn = head;
listint_t *up = head;

if (!head)
return (NULL);

while (dwn && up && up->next)
{
up = up->next->next;
dwn = dwn->next;
if (up == dwn)
{
dwn = head;
while (dwn != up)
{
dwn = dwn->next;
up = up->next;
}
return (up);
}
}
return (NULL);
}
