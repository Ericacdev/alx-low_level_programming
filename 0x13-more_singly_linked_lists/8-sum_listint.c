#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in a linked list.
 * @head: head node
 * Description: sum a new node
 * Return: return 0, if list empty.
 */
int sum_listint(listint_t *head)
{
	unsigned int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
