#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: variable name
 * Return: void.
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
