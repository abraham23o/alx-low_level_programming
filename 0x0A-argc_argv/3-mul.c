#include <stdio.h>
#include "main.h"
/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success) or 1(error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
/**
 * _atoi - converts string to integer
 * @str: string to be converted
 * Return: Always 0 success
 */
int _atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (sign * res);
}
