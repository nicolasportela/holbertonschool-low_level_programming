#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - print the name of a program
 * @s1: variable name
 * @s2: variable name
 * @n: variable name
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int ii;
	unsigned int j;
	unsigned int jj;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (ii = 0; s2[ii] != '\0' && ii < n; ii++)
	{
	}

	s = malloc((i + n + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		s[j] = s1[j];
	}

	for (jj = 0; s2[jj] != '\0' && jj < n; jj++)
	{
		s[j + jj] = s2[jj];
	}
	s[j + jj] = '\0';
	return (s);
}
