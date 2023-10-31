#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		fd = write(file, text_content, i);
		if (fd != i)
			return (-1);
	}
	close(file);

	return (1);
}
