#include "holberton.h"

/**
 * void print_alphabet - check the code for Holberton School students.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
