#include "holberton.h"

/**
 * *cap_string - check lowercase.
 * @s: s
 * Return: char.
 */
char *cap_string(char *s)
{
	int i, i2;
	char separator[] = " \n\t,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; separator[i2] != 0; i2++)
		{
			if (s[i] == separator[i2])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}
	}
	return (s);
}
