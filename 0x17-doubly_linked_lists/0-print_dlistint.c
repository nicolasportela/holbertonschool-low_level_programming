#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to a node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	
	return (nnodes);
}
