#include "holberton.h"

/**
 * binary_to_uint - function
 * @b: variable
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			n = n << 1;
			if (*b == '1')
			{
				n = n + 1;
			}
		}
	}
	return (n);
}
