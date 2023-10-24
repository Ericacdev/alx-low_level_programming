#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *alpha;
	listint_t *omega;

	alpha = NULL;
	omega = NULL;

	while (*head != NULL)
	{
		omega = (*head)->next;
		(*head)->next = alpha;
		alpha = *head;
		*head = omega;
	}

	*head = alpha;
	return (*head);
}
