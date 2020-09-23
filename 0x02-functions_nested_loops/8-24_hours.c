#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int x, a;

	for (x = 0; x <= 9; x++)
	{
		if (x <= 2)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
		}
}
