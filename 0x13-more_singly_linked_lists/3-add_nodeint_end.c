#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list.
 * @head: variable
 * @n: variable
 * Return: The adress of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
