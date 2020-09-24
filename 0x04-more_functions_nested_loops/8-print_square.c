#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: variable name
 * Return: void.
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
        	_putchar('\n');
		}
	}
}
