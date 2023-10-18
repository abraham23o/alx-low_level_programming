#include <stdio.h>

int prime_checker(int, int);

/**
 * is_prime_number - check if a number is a prime number
 * @n: number to be checked
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_checker(n, n - 1));
}

/**
 * prime_checker - check if a number is a prime number
 * @num: number to be checked
 * @div: divisor of num
 * Return: 1 if true, 0 if false
 */
int prime_checker(int num, int div)
{
	if (div <= 1)
		return (1);

	if (num % div == 0)
		return (0);

	return (prime_checker(num, div - 1));
}
