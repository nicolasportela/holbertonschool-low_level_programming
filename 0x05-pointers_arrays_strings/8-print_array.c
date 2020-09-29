#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: variable name
 * @n: variable name
 * Return: void.
 */

void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
	{
		printf("%d, ", a[n]);
	}
}
