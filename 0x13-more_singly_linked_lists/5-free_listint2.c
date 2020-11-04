#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: variable
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	aux = *head;

	if (head == NULL)
	{
		return;
	}

	while (aux)
	{
		free(aux);
		aux = aux->next;
	}
	*head = NULL;
}
