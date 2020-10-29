#include "lists.h"

/**
 * add_node - function
 * @head: variable
 * @str: variable
 * Return: adress of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
