#include "holberton.h"

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: variable name
 * @src: variable name
 * @n: variable name
 * Return: char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[dest_len] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
