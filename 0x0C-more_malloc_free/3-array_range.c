#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - print the name of a program
 * @min: variable name
 * @max: variable name
 * Return: int
 */

int *array_range(int min, int max)
{
	int *n;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	n = malloc(size * sizeof(int));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n[i] = min;
		min++;
	}
	return (n);
}
