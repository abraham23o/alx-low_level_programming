#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * positive_or_negative - Entry point
 * @i: integer input
 *
 * Description: Determine if number is positive or negative
 *
 * Return: nothing
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
