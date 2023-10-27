#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: int input
 * @m: int input
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int x;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = flip >> i;
		if (x & 1)
			j++;
	}
	return (j);
}
