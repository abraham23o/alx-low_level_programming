#include <stdio.h>
#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: int input
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds square root of a number
 * @x: number to find square root
 * @y: int
 * Return: square root of x
 */
int _sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);

	return (_sqrt(x, y + 1));
}
