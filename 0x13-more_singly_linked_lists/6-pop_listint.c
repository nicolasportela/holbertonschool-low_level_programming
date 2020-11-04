#include "lists.h"

/**
 * pop_listint - function
 * @head: variable
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int save;
	listint_t *aux = *head;

	if (*head == NULL)
	{
		return (0);
	}

	save = (*head)->n;
	*head = aux->next;
	free(aux);
	return (save);
}
