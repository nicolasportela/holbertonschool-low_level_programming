#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: variable name
 * Return: char.
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	n = _strlen_recursion(s + 1);
	n++;
	return (n);
}
