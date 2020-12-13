#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: head of the list
 * @n: member of the struct
 * Return: The adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		aux = new->prev;
	}
	return (new);
}
