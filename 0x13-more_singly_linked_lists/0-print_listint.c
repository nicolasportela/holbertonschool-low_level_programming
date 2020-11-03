#include "lists.h"

/**
 * print_listint - function
 * @h: variable name
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
