#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: name of the variable
 * Return: void.
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%i, ", a);
		}
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%i, ", a);
		}
	}
	printf("98\n");
}
