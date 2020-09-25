#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: variable name
 * Return: void.
 */

void print_triangle(int size)
{
	int a, b, c, espacio, pound;

	espacio = size - 1;
	pound = 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = espacio; b > 0; b--)
			{
				_putchar (' ');
			}
			for (c = 0; c < pound; c++)
			{
				_putchar ('#');
			}
			espacio--;
			pound++;
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
