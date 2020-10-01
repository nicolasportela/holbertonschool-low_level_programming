#include "holberton.h"

/**
 *reverse_array - compare strings.
 *@a: variable name
 *@n: variable name
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	b = n - 1;
	for (i = 0; i < b; b--, i++)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
