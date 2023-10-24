#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: A pointer to head linked list
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success 1., On failure -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *dlt = *head;
	unsigned int j;

	if (dlt == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dlt);
		return (1);
	}

	for (j = 0; j < (index - 1); j++)
	{
		if (dlt->next == NULL)
			return (-1);

		dlt = dlt->next;
	}

	tmp = dlt->next;
	dlt->next = tmp->next;
	free(tmp);
	return (1);
}
