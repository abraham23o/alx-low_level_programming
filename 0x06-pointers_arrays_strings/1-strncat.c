#include "main.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: string input
 * @src: string input
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, j;
	char *ptr = dest;

	while (dest[length] != '\0')
		++length;

	for (j = n; src[j] != '\0'; ++j, ++length)
		dest[length] = src[j];

	dest[length] = '\0';

	return (ptr);
}
