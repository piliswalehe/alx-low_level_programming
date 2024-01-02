#include "lists.h"

/**
 * sum_dlistint - sum of n
 * @head: head of list
 * Return: sum of n or 0 if it fails
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}

	}
	return (sum);
}
