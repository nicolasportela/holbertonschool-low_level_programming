#include "holberton.h"

/**
 * rev_string - reverse string.
 *@s: s.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = 0;
	for (a = a - 1; b < a; a--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
	}
}
