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
	int fdw, fd, ch = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[ch])
			ch++;

		fdw = write(fd, text_content, ch);
		if (fdw != ch)
			return (-1);
	}
	close(fd);

	return (1);
}
