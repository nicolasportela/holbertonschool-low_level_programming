#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 00; h < 24; h++)
	{
		for (m = 00; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
