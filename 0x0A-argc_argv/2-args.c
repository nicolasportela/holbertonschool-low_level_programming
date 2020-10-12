#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: variable name
 * @argv: variable name
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
}
	return (0);
}
