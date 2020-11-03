#include "lists.h"

/**
 * listint_len - function
 * @h: variable name
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
