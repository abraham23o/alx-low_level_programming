#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value of the array created
 * @max: maximum value of the array created
 * Return: 0, always
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
