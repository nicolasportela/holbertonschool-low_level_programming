#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 * @dest: variable name
 * @src: variable name
 * Return: char pointer.
 */

char *_strcat(char *dest, char *src)
{
	int index, c;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[index] = src[c];
		index++;
	}
	return (dest);
}
