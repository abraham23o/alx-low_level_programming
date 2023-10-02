#include <stdio.h>
/**
 * _atoi - convert string to int
 * @str: string to be converted
 * Return: value of str type int
 */
int _atoi(char *str)
{
	int i, res = 0;

	for (i = 0; str[i] != '\0'; ++i)
	res = res * 10 + str[i] - '0';

	return (res);
}
