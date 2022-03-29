#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: text content
 * @filename: file name
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, n = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n = strlen(text_content);
	write(fd, text_content, n);
	close(fd);
	return (1);
}
