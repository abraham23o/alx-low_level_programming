#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x = 0, y, z = size - 1;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < z)
					_putchar(' ');
				else
					_putchar('#');
			}
			z--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
