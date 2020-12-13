#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: head of a list
 *
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		counter = (head->n) + counter;
		head = head->next;
	}
	return (counter);
}
