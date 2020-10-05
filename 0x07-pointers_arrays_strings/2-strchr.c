#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 * @s: variable name
 * @c: variable name
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);

		}
		else
		{
			return (0);
		}
	}
	return (0);
}
