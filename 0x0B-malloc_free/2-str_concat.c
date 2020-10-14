#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - print the name of a program
 * @s1: variable name
 * @s2: variable name
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int ii;
	int j;
	int jj;
	char *s;

	if (s1 == '\0')
        {
                s1 = "";
        }
        if (s2 == '\0')
        {
                s2 = "";
        }

	for (i = 0; i != '\0'; i++)
	{
	}
	for (ii = 0; ii != '\0'; ii++)
	{
	}

	s = malloc((i + ii) * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		s[j] = s1[j];
	}

	for (jj = 0; s2[jj] != '\0'; jj++)
	{
		s[j + jj] = s2[jj];
	}
	return (s);
}
