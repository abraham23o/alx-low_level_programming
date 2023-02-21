#include "main.h"
/**
 * main - Entry point
 *
 * Description: "print _putchar"
 *
 * Return: Always return 0
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
