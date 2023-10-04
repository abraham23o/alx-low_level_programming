#include <stdio.h>

int checkForPrime(int);

/**
 * main - Entry point
 *
 * Return: 0, success
 */
int main(void)
{

	int n1, primeNo;

	printf("\n\nRecursion: Check a number is prime number or not: \n");
	printf("--------------------------------------------------------\n");

	printf("Input any positive number: ");
	scanf("%d", &n1);

	primeNo = checkForPrime(n1);

	if (primeNo == 1)
		printf("The number %d is a prime number. \n\n", n1);
	else
		printf("The number %d is not a prime number. \nn", n1);

	return (0);
}

#include <stdio.h>

/**
 * checkForPrime - check for prime numbers
 * @n: number to check
 * Return: 1 if n is prime number, 0 false
 */
int checkForPrime(int n)
{
	int i;

	while (i > 0)
	{
		if (i == 1)
			return (1);

		if (n % i == 0)
			return (0);

		i -= 1;
	}
	return (checkForPrime(n));
}
