#include "holberton.h"

/**
 * close_func - function
 * @a: variable
 * Return: void.
 */
void close_func(int a)
{
	int close_a;

	close_a = close(a);
	if (close_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}

/**
 * main - function
 * @argc: number of arguments
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fdorigin, fddest, fdwri, fdread = 1;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (fdread > 0)
	{
		fdread = read(fdorigin, buf, 1024);
		if (fdread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf), exit(98);
		}
		if (fdread > 0)
		{
			fdwri = write(fddest, buf, fdread);
			if (fdwri == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				free(buf), exit(99);
			}
		}
	}
	close_func(fddest);
	close_func(fdorigin);
	free(buf);
	return (0);
}
