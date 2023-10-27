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
	int uint = 0, slen = strlen(b) - 1, i, num;
	char bit;

	if (b == NULL)
		return (0);

	for (i = slen; i >= 0; i--)
	{
		bit = b[i];
		num = slen - i;

		if (bit != '1' && bit != '0')
			return (0);

		if (bit == '1')
			uint += (1 << num);
	}
	return (uint);
}
