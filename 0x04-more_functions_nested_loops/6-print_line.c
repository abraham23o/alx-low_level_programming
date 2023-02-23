#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: integer input
 * Return: Always return 0
 */
void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		for (; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}




