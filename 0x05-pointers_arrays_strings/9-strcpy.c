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
	char *temp = dest;

	while (*src)
		*dest++ = *src++;

	return (temp);
}
