#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: pointer to an array of arguments passed by the user
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = func(num1, num2);

	printf("%d\n", calc);

	return (0);
}
