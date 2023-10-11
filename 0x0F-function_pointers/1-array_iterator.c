#include <stdio.h>
/**
 * array_iterator - prints out elements of an array passed
 * @array: holds elements to be printed
 * @size: number of elements in the array
 * @action: function pointer passed as argument
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
