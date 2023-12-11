#include "main.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: string input
 * @src: string input
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, j;
	char *ptr = dest;

	while (dest[length] != '\0')
		++length;

	for (j = 0; src[j] != '\0'; ++j, ++length)
		dest[length] = src[j];

	dest[length] = '\0';

	return (ptr);
}
