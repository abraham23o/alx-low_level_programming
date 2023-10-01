#include <stdio.h>
/**
 * myAtoi - convert string to int
 * @str: string to be converted
 * Return: value os str type int
 */
int myAtoi(char *str)
{
	int i, res = 0;

	for (i = 0; str[i] != '\0'; ++i)
	res = res * 10 + str[i] - '0';

	return (res);
}
