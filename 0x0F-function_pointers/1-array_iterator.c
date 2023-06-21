#include "function_pointers.h"
/**
 * array_iterator - function that passes through an array
 * @array: int in a list
 * @size: the size of the array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
