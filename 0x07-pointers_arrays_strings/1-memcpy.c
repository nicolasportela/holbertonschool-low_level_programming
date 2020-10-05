#include "holberton.h"

/**
 * *_memcpy - check the code for Holberton School students.
 * @dest: variable name
 * @src: variable name
 * @n: variable name
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
