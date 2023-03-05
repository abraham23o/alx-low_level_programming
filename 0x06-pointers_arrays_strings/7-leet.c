#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @a: an input string to encode
 * Return: An encode string
 */
char *leet(char *a)
{
	int i = 0, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (a[i])
	{
		for (j = 0; j < 10; j++)
			if (a[i] == str[j])
				a[i] = subs[j];

		i++;
	}

	return (a);
}
