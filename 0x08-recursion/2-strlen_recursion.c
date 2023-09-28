#include <stdio.h>
/**
 * _strlen_recursion - print the length of a string
 * @s: string whose length is to be printed
 * Return: number of characters in s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + (_strlen_recursion(s + 1)));
}
