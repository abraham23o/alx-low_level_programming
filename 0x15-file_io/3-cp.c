#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * error_message - message to print when one encounters an error
 * @error_code: code of encountered error
 * @filename: name of file handled
 * Return: error code
 */
int error_message(int error_code, const char *filename)
{
	const char *error_msg = NULL;
	int exit_code;

	switch (error_code)
	{
		case 97:
			error_msg = "Usage: cp file_from file_to\n";
			exit_code = 97;
			break;

		case 98:
			error_msg = "Error: Can't read from file NAME_OF_THE_FILEi\n";
			exit_code = 98;
			break;

		case 99:
			error_msg = "Error: Can't write to NAME_OF_THE_FILE\n";
			exit_code = 99;
			break;

		case 100:
			error_msg = "Error: Can't close fd FD_VALUE\n";
			exit_code = 100;
			break;

		default:
			exit_code = -1;
			break;
	}
	if (error_msg)
		dprintf(STDERR_FILENO, error_msg, filename);

	return (exit_code);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: arguments passed of type string
 * Return: 0, success else respective error_code, failed
 */
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buffer;

	if (argc != 3)
		return (error_message(97, NULL));

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	src = open(argv[1], O_RDONLY);
	if (src < 0)
		return (error_message(98, argv[1]));

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest < 0)
		return (error_message(99, argv[2]));

	while ((r = read(src, buffer, BUF_SIZE)) > 0)
	{
		w = write(dest, buffer, r);
		if (w < 0)
		{
			close(src);
			close(dest);
			return (error_message(99, argv[2]));
		}
	}
	if (r < 0)
	{
		close(src);
		close(dest);
		return (error_message(98, argv[1]));
	}

	if (close(src) < 0)
		return (error_message(100, argv[1]));

	if (close(dest) < 0)
		return (error_message(100, argv[2]));

	return (0);
}
