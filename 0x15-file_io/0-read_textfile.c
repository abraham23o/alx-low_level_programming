#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer to the file we will operate on
 * @letters: number of letters to be read and print
 * Return: actual number of letters read ad printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t fdr, fdw;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	fdr = read(fd, buffer, letters);
	if (fdr < 0)
	{
		free(buffer);
		return (0);
	}

	fdw = write(STDOUT_FILENO, buffer, fdr);
	if (fdw < 0)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (fdw);
}
