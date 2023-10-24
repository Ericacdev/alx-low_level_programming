#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head node
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tp;

	while (head)
	{
		tp = head;
		if (m == index)
			return (tp);
		m++;
		head = head->next;
	}
	return (NULL);
}
