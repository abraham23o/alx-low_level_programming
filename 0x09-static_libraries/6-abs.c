#include "main.h"
/**
 *_abs - Entry point
 * @a: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number a
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
