#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: integer input
 * @b: integer input
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
