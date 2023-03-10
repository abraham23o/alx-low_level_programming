#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: character string
 * @c: character to be located in a string
 * Return: Pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
