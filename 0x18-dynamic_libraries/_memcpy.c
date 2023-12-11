#include "main.h"

/**
 * _memcpy - Copies the memory area
 * @dest: memory areato copy to
 * @src: memory area to copy from
 * @n: bytes to be copied from src memory area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
