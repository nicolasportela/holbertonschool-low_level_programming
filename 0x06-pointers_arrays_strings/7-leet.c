#include "holberton.h"

/**
 * *leet - reverse string.
 * @a: variable name
 * Return: char.
 */

char *leet(char *a)
{
	int i, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == letters[j])
			{
				a[i] = numbers[j];
			}
		}
	}
	return (a);
}
