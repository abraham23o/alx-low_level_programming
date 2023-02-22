#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: an integer input
 *
 * Description: prints last digit of a number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int x;

	if (a < 0)
		x = -1 * (a % 10);
	else
		x = a % 10;
	_putchar((x % 10) + '0');
	return (x % 10);
}
