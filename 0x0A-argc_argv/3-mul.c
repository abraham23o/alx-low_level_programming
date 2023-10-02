#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments passed to the main() function
 * @argv: arguments passed to the main() function
 * Return: Always success, 0
 */
int main(int argc, char *argv[])
{
	int x, y, answer = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		answer = x * y;
		printf("%d\n", answer);
	}
	return (0);
}
