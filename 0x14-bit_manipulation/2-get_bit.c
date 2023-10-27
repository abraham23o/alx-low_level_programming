#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number input
 * @index: position of bit
 * Return: value of bit at a given index, 0 or 1, else -1 to indicate
 * error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
