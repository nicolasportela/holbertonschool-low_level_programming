#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: variable name
 * Return: void.
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
