#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - add variable number of arguments passed to this function
 * @n: number of arguments passed
 * Return: sum of varargs
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arr_ptr;

	va_start(arr_ptr, n);


	for (; i < n; i++)
		sum += va_arg(arr_ptr, int);

	va_end(arr_ptr);

	return (sum);
}
