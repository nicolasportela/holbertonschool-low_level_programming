#include "lists.h"

/**
 * sum_listint - function
 * @head: variable
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int counter = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		counter = (head->n) + counter;
		head = head->next;
	}
	return (counter);
}
