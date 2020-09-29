#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: variable name
 * Return: void.
 */

void puts_half(char *str)
{
	int a, b, c;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((a % 2) != 0)
		{
			b = (a - 1) / 2;
		}
		else
		{
			b = a / 2;
		}
	}
	for (c = b + 1; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
