#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to head node of a list
 * @index: index to delete
 * Return: 1 on success, -1 on error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev_node, *next_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	if (index >= dlistint_len(current))
		return (-1);
	else if (index <= (dlistint_len(current) - 1))
	{
		for (i = 0; i < index; i++)
			current = current->next;
		prev_node = current->prev;
		if (current->next)
		{
			next_node = current->next;
			prev_node->next = next_node;
			next_node->prev = prev_node;
			free(current);
		}
		else
		{
			prev_node->next = NULL;
			free(current);
		}
	}
	return (1);
}

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
