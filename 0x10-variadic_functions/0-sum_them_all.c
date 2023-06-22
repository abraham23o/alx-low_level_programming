#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to add given parameters
 * @n: nummber of parameters to be added
 * Return: sum of n parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list my_numbers;

	if (n == 0)
		return (0);

	va_start(my_numbers, n);

	for (i = 0; i < n; i++)
		result += va_arg(my_numbers, int);

	va_end(my_numbers);
	return (result);
}
