#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @x: name of the variable
 * Return: void.
 */

int print_last_digit(int x)
{
	int lastDigit;

	lastDigit = x % 10;

	if (x < 0)
	{

		lastDigit = lastDigit * (-1);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
