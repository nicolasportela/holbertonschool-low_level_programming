#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @x: name of the variable
 * Return: void.
 */

int print_last_digit(int x)
{
		if (x < 0)
		{
			return ((x % 10) * -1);
		}
		else
		{
			return (x % 10);
		}
}
