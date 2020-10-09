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

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[index + i] = src[i];
	}
	dest[index + i] = '\0';

	return (dest);
}
