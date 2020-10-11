#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: variable name
 * @argv: variable name
 * Return: int
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
