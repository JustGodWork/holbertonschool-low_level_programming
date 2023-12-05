#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * close_status - function
 * @fd: file constructor
 * Return: Nothing.
 */
void close_status(int fd)
{
	int status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", status);
		exit(100);
	}
}

/**
 * write_buffer - function
 * @dest: @buffer dest
 * @buffer: buffer to write in @dest 1024 bytes
 * @size: size of @buffer
 * @av: arguments in main
 * Return: Nothing.
 */
void write_buffer(int dest, char buffer[1024], int size, char **av)
{
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (write(dest, buffer, size) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @ac: number of element in **av
 * @av: array
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int src;
	int dest;
	char buffer[1024];
	int size = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY, 0664);

	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (size != 0)
	{
		size = read(src, buffer, 1024);
		write_buffer(dest, buffer, size, av);
	}

	close_status(src);
	close_status(dest);
	return (0);
}
