#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print the alphabet 10 times
 *
 * Return: Always return 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
