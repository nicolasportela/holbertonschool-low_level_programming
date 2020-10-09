#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @x: name of the variable
 * Return: void.
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
