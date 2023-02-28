#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: string input
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, x, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (x = n; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');
}

