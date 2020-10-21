#include <stdlib.h>

/**
 * int_index - function
 * @array: variable name
 * @size: variable name
 * @cmp: variable name
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
