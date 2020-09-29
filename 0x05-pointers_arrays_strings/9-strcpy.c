#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @src: variable name
 * @dest: variable name
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
	{
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
