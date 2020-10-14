#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - print the name of a program
 * @size: variable name
 * @c: variable name
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
		return (s);
}
