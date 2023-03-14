#include "main.h"
#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: number of arguments
 * @argv: pointer of character arrays
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
