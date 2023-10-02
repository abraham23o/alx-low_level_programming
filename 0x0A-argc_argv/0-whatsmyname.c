#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments passed to the main() function
 * @argv: arguments passed to the main() function
 * Return: Always success, 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
