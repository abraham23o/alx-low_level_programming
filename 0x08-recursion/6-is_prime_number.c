#include "main.h"

int _divisible(int number, int result);

/**
 * is_prime_number - check if a number is a prime number
 * @n: number to be checked
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	int result = 2;

	if (n < 2)
		return (0);

	if (n <= 3)
		return (1);

	return (_divisible(n, result));
}

/**
 * _divisible - check if a number is divisible
 * @number: number to be divided
 * @result: result of division
 * Return: 1 if the number divisible else 0
 */
int _divisible(int number, int result)
{
	if (number % result == 0)
		return (0);

	if (result == number / 2)
		return (1);

	return (_divisible(number, result + 1));
}
