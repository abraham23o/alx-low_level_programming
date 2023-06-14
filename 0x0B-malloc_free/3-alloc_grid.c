#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2-dimensional array of int
 * @width: numner of columns of the array
 * @height: number of rows
 * Return: pointer to a 2-d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int *) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
