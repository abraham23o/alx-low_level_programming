#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of n
 * @n : input integer
 * Return: n^2
 */
int _sqrt_recursion(int n)
{
	int result = 0;

	if (n >= 0)
	{
		result = _sqrt_recursion(n);
		return (result);
	}
	else
		return (-1);
}
