#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: string input
 * @src: string input
 * @n: loop
 *
 * Return: something
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
