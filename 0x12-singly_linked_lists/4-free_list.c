#include "lists.h"

/**
 * free_list - free a list.
 * @head: head
 * Return: Always 0.
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
