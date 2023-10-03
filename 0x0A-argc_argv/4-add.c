#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _num_check - check for numbers
 *@str: string
 *Return: 0, success
 */
int _num_check(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (!_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Function that adds positive numbers
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	int i;
	int a_to_i;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (_num_check(argv[i]))
		{
			a_to_i = _atoi(argv[i]);
			sum += a_to_i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
