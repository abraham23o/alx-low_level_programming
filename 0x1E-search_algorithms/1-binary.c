#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, mid, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			end = mid - 1;

		else
			start = mid + 1;
	}
	return (-1);
}
