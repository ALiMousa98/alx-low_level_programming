#include "lists.h"

/**
 * sum_dlistint - Returns the aum of all list data.
 * @head: Pointer to the head of the list.
 *
 * Return: sum of all nodes' data, or NULL if it doesn't exist.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;

	}

	return (sum);
}
