#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - print the name of a program
 * @b: variable name
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b * sizeof(unsigned int));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
