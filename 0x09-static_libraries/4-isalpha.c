#include "main.h"
/**
 * _isalpha - Entry point
 * @c: input character
 *
 * Description: checks for alphabetic character
 *
 * Return: 1 if character is letter or 0 if otherwise
 */
int _isalpha(int c)
{
	char y, x;
	int isletter = 0;

	for (y = 'a'; y <= 'z'; y++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			if (c == y || c == x)
				isletter = 1;
		}
	}
	return (isletter);
}

