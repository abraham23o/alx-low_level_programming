#include "main.h"
/**
 * _isdigit - Checks for a digit (0 - 9)
 * @c: integer input
 * Return: 1 if digit between 0 - 9, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
