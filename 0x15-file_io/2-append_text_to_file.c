#include "holberton.h"

/**
 * append_text_to_file - function
 * @filename: variable
 * @text_content: variable
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wri;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY, 0664);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		wri = write(fd, text_content, i);
	}

	if (wri == -1)
	{
		return (-1);
	}

	return (1);
}
