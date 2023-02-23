#include "main.h"
/**
 * print_numbers - Print numbers from 0 - 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar((a % 10) + '0');
	_putchar('\n');
}
