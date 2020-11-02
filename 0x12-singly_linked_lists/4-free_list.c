#include "lists.h"

/**
 * free_list - free a list
 * @head: variable
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
