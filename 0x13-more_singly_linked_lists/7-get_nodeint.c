#include "lists.h"

/**
 * *get_nodeint_at_index - function
 * @head: variable
 * @index: variable
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node < index)
	{
		head = head->next;
		node++;
	}
	return (head);
}
