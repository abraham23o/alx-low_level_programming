#include "main.h"
/**
 * puts2 - Prints every other character of a string
 *@str: string input
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	for  (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
