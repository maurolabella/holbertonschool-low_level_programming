#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content tex
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, n = 0, check = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n = strlen(text_content);
	check = write(fd, text_content, n);

	if (check == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
