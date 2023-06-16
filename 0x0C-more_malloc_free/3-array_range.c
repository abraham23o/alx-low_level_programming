#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: least element in the array
 * @max: greatest element in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size, *array_ptr;

	if (min > max)
		return (NULL);
	size = max - min;
	array_ptr = malloc(sizeof(int) * (size + 1));
	if (array_ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		array_ptr[i] = min++;
	return (array_ptr);
}
