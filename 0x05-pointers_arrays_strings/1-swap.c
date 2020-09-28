#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: variable name
 * @b: variable name
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
