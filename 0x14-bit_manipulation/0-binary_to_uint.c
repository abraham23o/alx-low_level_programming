#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or contains one
 * or more chars that are neither 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int slen, num = 1;

	if (b == NULL)
		return (0);

	while (b[slen])
		slen++;

	while (slen)
	{
		if (b[slen - 1] != '0' && b[slen - 1] != '1')
			return (0);

		if (b[slen - 1] == '1')
			uint += num;
		num *= 2;
		slen--;
	}
	return (uint);
}
