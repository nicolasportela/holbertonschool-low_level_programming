#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: variable name
 * @needle: variable name
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (
