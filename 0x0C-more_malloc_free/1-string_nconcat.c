#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string to append to
 * @s2: string which we append from n bytes
 * @n: bytes to append
 * Return: pointer to memory which contains string appended
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = *s1, s1++;
		else
			ptr[i] = *s2, s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
