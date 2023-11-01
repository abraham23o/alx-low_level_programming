#include "main.h"

/**
 * append_text_to_file - function that appends text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * or write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, ch = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[ch])
			ch++;

		fdw = write(fd, text_content, ch);
		if (fdw != ch)
			return (1);
	}
	close(fd);

	return (1);
}
