#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head of a list
 * @index: index of the node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);

	while (node < index)
	{
		head = head->next;
		node++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
