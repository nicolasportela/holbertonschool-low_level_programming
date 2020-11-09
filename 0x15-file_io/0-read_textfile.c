#include "holberton.h"

/**
 * read_textfile - function
 * @filename: variable
 * @letters: variable
 * Return: reads a text file and prints it to the POSIX standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int fd;
	int count;
	int wri;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	count = read(fd, buf, letters);

	wri = write(STDOUT_FILENO, buf, count);

	if (wri == -1)
	{
		return (0);
	}

	close(fd);
	free(buf);
	return (wri);
}
