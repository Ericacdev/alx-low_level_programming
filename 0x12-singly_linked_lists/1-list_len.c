#include <stdlib>
#include "lists.h"

/**
 *list_len - returns the number of elements in a linkedlist.
 *
 *@h:head pointer
 *
 *Return :number of elements
 */
size_t list_len(const list_t *h)
{
size_t num_el = 0;

while (h)
{
	num_el++;
	h = h->next;
}

return (num_el);

}
