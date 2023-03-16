#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of characters
 * Return: 0-success, 1-error
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = _atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
