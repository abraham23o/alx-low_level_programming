#include "main.h"
/**
 * _strcmp - Compares 2 strings
 * @s1: string input
 * @s2: string input
 *
 * Return: Something
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
