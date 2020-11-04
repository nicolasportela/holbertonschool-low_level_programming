#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: variable
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}

	aux = *head;

	while (aux)
	{
		free(aux);
		aux = aux->next;
	}
	*head = NULL;
}
