#include "main.h"
/**
 * _sqrt - find square root of a number
 * @n: number to get square root of
 * @i: square root of n
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number to find square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
