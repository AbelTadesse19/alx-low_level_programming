#include "lists.h"

/**
 * dlistint_len - returns the number ofelements in
 * double linked list
 *
 * @h: head of the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
