#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of a list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
