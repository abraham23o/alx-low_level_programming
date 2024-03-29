#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
