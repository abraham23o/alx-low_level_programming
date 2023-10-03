#include <stdio.h>
/**
 * _atoi - convert string to int
 * @str: string to be converted
 * Return: value of str type int
 */
int _atoi(char *str)
{
	int i = 0, sign = 1, res = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (sign * res);
}
