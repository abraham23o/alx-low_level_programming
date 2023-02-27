#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: an input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (;str[i] != '\0'; i++)
		_putchar(str[i]);
	
	_putchar('\n');
}
