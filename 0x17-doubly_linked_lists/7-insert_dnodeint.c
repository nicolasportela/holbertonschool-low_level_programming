#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @head: pointer to head node of a list
 * @idx: index
 * @n: int to add to new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode;
	dlistint_t *save = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (save->next == NULL)
			return (NULL);
		save = save->next;
	}

	newnode->next = save->next;
	save->next = newnode;

	return (newnode);
}
