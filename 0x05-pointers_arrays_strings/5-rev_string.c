#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string input
 *
 * Return: Always return 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * rev_string - Prints a string in reverse
 * @s: an input string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, len, temp;
	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
