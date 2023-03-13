#include "main.h"
/**
 * _strcpy - copy src string to dest string
 * @dest: string input
 * @src: string input
 *
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, x = 0;

	while (*(src + i) != '\0')
		i++;

	for (; x < i; x++)
		dest[x] = src[x];

	dest[i] = '\0';
	return (dest);
}
