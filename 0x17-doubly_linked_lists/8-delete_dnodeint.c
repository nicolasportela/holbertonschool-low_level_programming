#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to head node of a list
 * @index: index to delete
 * Return: 1 on success, -1 on error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p_index = *head;
	dlistint_t *p_prev = *head;
	unsigned int i;


	if (*head == NULL)
		return (-1);

	if (index > dlistint_len(*head))
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
	for (i = 0; (i < (index - 1)) && (p_prev->next != NULL); i++)
	{
		p_prev = p_prev->next;
	}
	if (p_prev->next == NULL)
		return (-1);

	for (i = 0; (i < index) && (p_index != NULL); i++)
		p_index = p_index->next;

	p_prev->next = p_index->next;
	free(p_index);

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
