#include "lists.h"

/**
 * list_len - function
 * @h: variable name
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nelements = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		nelements++;
		h = h->next;
	}
	return (nelements);
}
