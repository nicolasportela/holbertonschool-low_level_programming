#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to a node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}

	return (nnodes);
}
