#include "main.h"
/**
 * read_textfile - read file
 * @filename: file name
 * @letters: number of letters
 * Return: readd or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;
	ssize_t readd = 0;

	buffer = malloc(letters);
	if (!buffer)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readd = read(fd, buffer, letters);
	close(fd);
	write(STDOUT_FILENO, buffer, readd);
	free(buffer);

	return (readd);
}
