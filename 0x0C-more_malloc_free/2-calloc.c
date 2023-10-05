#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc()
 * @nmemb: number of elements in an array
 * @size: bytes of each nmemb
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
