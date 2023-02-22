#include "main.h"
/**
 * print_sign - Entry point
 * @n: input
 * Description: print the sign of a number
 * Return: 1 if @n > 0, 0 if @n == 0, -1 if @n < 0
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
