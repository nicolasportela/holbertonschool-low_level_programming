#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: variable name
 * @accept: variable name
 * Return: char.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j] && j < i)
			{
				n++;
			}
		}
	}
	return (n);
}
