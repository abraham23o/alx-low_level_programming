#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments passed to the main() function
 * @argv: arguments passed to the main() function
 * Return: Always success, 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
