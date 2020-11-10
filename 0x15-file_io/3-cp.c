#include "holberton.h"

/**
 * main - function
 * @argc: number of arguments
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fdorigin;
	int fddest;
	int count;
	int wri;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdorigin = open(argv[1], O_RDONLY);
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdorigin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fddest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (count > 0)
	{
		count = read(fdorigin, buf, 1024);
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		if (count >= 1)
		{
wri 
