#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a list
 * @h: head of a list
 * Return:  number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	
	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->next;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
