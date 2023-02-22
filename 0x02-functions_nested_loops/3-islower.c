#include "main.h"
/**
 *  _islower - Entry point
 *  @c: input character
 *  Description: checks the lowercase character
 *
 *  Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char x;
	int y = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			y = 1;
	}
	return (y);
}
