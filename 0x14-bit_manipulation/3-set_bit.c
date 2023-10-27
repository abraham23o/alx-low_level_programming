#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int input
 * @index: position
 * Return: 1 success, else -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check_bit = 1 << index;

	*n = *n | check_bit;

	return (*n);
}
