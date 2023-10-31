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
	int result;
	char *tmp;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	result = open(filename, O_RDONLY);
	if (result < 0)
	{
		free(tmp);
		return (0);
	}

	r = read(result, tmp, letters);
	if (r < 0)
	{
		free(tmp);
		return (0);
	}

	w = write(STDOUT_FILENO, tmp, r);
	if (w < 0)
	{
		free(tmp);
		return (0);
	}

	close(result);
	free(tmp);

	return (w);
}
