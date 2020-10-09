#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: the name of the variable
 * Return: 1 or 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
