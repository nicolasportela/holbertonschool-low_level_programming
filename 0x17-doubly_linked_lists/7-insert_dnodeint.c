#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to head node of a list
 * @idx: index
 * @n: int to add to new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode;
	dlistint_t *save = *h;
	dlistint_t *previous;

	if (idx > dlistint_len(*h))
		return (NULL);

	if (*h == NULL || idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}

	if (idx == dlistint_len(*h))
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}

	for (i = 0; i < idx; i++)
		save = save->next;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	previous = save->prev;
	newnode->next = save;
	newnode->prev = previous;
	previous->next = newnode;
	save->prev = newnode;
	return (newnode);
}


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
