#include "lists.h"

/**
 * free_listint - free a list
 * @head: variable
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
