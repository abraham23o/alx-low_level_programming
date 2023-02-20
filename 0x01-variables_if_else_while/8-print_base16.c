#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - "print all the numbers
 * of base 16 in lowercase"
 *
 * Return: always return  0
 */
int main(void)
{
	int a;
	char x;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
