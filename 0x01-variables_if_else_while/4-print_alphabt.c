#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'print the alphabet'
 * in lowercase except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
