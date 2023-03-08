#include "main.h"
/**
 * _strlen_recursion - find length of a string
 * @s: string input
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
