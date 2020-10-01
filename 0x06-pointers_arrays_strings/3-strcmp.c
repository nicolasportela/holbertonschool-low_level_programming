#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: variable name
 * @s2: variable name
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
