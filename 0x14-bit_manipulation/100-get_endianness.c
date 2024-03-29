#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;

	unsigned char *byte = (unsigned char *)&num;

	return (*byte = 1);
}
