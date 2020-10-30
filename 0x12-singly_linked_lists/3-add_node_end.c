#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list.
 * @head: head
 * @str: str
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new = NULL;
	list_t *aux = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->str = strdup(str);
	new->len = i;
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
