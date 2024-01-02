#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head of a list
 * @index: index of the node, starting from 0
 * Return: node or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (a == index)
			break;
		head = head->next;
		a++;
	}

	return (head);
}
