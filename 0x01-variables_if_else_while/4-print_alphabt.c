#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'y')
		{
			putchar(x);
		}
		putchar('\n');
		return (0);
	}
}
