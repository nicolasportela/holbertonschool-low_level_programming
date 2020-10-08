#include "holberton.h"

/**
 * _prime_check - Entry point
 * @n: vriable name
 * @i: vriable name
 * Return: int
 */

int _prime_check(int n, int i)
{
        if (i >= n)
        {
                return (1);
        }
        if (n % i == 0)
        {
                return (0);
        }
        return (_prime_check(n, i + 2));
}

/**
 * is_prime_number - Entry point
 * @n: variable name
 * Return: int
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	x = _prime_check(n, 3);
	if (x != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
