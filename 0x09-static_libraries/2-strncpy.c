#include "holberton.h"

/**
 * *_strncpy - check the code for Holberton School students.
 * @dest: variable name
 * @src: variable name
 * @n: variable name
 * Return: char.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
