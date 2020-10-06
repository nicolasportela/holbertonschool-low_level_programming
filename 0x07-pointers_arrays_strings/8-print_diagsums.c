#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: variable name
 * @size: variable name
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, len, sig, sum1;

	len = (size * size) - 1;
	sig = size + 1;

	for (i = 0; i < len; i = i + sig)
	{
		sum1 = a[i] + a[sig];
		printf("%d", sum1);
	}
}
