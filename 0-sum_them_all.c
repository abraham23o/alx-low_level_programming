#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - addition of integers
 * @n: number of arguments passed
 * Return: sum of arguments passed to function sum_them_all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
