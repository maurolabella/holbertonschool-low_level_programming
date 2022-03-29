#include "main.h"
/**
 * closing - close function
 * @n: as a file handler
 * Return: int
 */
void closing(int n)
{
	int v = 0;

	v = close(n);
	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}

/**
 * control_source - control results opening
 * @n: as a file handler
 * @s: pointer to filename
 * @exit_code: code used on message
 * Return: int
 */
void control_source(int n, char *s, int exit_code)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(exit_code);
	}
}

/**
 * control_destiny - control results closing
 * @n: as a file handler
 * @s: pointer to filename
 * @exit_code: code used on message
 * Return: int
 */
void control_destiny(int n, char *s, int exit_code)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(exit_code);
	}
}

/**
 * main - copy a file to another
 * @argc: source file
 * @argv: destine file
 * Return: int
 */
int main(int argc, char *argv[])
{
	static char buffer[1024];
	int sd = 0, sf = 0, s = 1024, d = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sf = open(argv[1], O_RDONLY);
	control_source(sf, argv[1], 98);

	sd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0644);
	control_destiny(sd, argv[2], 99);

	while (s == 1024)
	{
		s = read(sf, buffer, 1024);
		control_source(s, argv[1], 98);

		d = write(sd, buffer, s);
		control_destiny(d, argv[2], 99);
	}
	closing(sf);
	closing(sd);
	return (0);
}
