#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: variable name
 * Return: void.
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] < '\0')
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
