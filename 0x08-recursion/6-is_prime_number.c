#include <stdio.h>

/**
 * is_prime_number - check for prime numbers
 * @n: number to check
 * Return: 1 if n is prime number, 0 false
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	i -= 1;

	return (is_prime_number(n));
}
