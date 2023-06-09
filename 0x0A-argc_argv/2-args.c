#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
