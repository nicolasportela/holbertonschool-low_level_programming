#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				if (j == 0)
				{
					_putchar(m + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(m + '0');
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
