#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (b > 9)
			{
				_putchar('1');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
