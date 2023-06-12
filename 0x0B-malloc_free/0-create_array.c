#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of char and initializes them
 * @size: size allocated for char c
 * @c: char created
 * Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
