#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number whose binary is to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int check_bit;

	for (i = 63; i >= 0; i--)
	{
		check_bit = n >> i;

		if (check_bit & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
