#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to compare to
 * @accept: substring being compared
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, exists;
	char *x = accept;

	while (*s)
	{
		exists = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				exists = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = x;
		if (exists == 0)
			break;
	}
	return (count);
}
