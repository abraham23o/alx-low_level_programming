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
	int islower = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			islower = 1;
	}
	return (islower);
}
