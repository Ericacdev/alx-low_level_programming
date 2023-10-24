#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head of the listint_t list.
 *
 * Return: return 0 if the linked list is empty
 * else returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (node);
}
