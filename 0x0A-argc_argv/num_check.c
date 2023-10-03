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
