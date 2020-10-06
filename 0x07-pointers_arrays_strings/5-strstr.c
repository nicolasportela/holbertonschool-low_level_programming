#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: variable name
 * @needle: variable name
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[i] != '\0'; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
		}
		if (!needle[i]) /*lo mismo que poner "needle[i] == '\0')*/
		{
			return (haystack);
		}
		return (0);
