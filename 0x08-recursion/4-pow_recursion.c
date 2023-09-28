#include <stdio.h>
/**
 * _pow_recursion - function to return the value of x raised to power y
 * @x: int input
 * @y: int input
 * Return: the value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
