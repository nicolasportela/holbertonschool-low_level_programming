#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
