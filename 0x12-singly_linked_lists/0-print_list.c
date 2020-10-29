#include "lists.h"

/**
 * print_list - function
 * @h: variable name
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nnodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
