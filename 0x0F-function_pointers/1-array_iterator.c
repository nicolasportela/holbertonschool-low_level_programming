#include <stdlib.h>

/**
 * array_iterator - function
 * @array: variable name
 * @size: variable name
 * @action: variable name
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
