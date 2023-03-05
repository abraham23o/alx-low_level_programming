#include "main.h"
/**
 * _strncat - Concatenates 2 strings
 * @dest: string input
 * @src: string input
 * @n: number of strings from src to concatenate
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, j = 0;

	while (dest[length] != '\0')
		length++;

	while (j < n && src[j] != '\0')
	{
		dest[length] = src[j];
		length++;
		j++;
	}

	dest[length] = '\0';

	return (dest);
}
