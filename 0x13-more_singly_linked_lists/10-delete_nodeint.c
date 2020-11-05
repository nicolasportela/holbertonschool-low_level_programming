#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: variable
 * @index: variable
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	while (node != index)
	{
		*head = (*head)->next;
		free(head);
		node++;
		if (*head == NULL)
		{
			return (-1);
		}
	}
	return (1);
}
