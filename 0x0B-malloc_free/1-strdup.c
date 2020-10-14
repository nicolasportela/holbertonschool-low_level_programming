#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - check the code for Holberton School students.
 * @str: variable name
 * Return: char
 */

char *_strdup(char *str)
{
	char *s; /*pointer to copy of str*/
	int i; /*index of str*/
	int ii; /*index of copy of str*/

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii <= i; ii++)
	{
		s[ii] = str[ii];
	}
	return (s);
}
