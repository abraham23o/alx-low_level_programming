#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed btn numbers
 * @n: number of integers passed to the function
 * Return: 0, success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst_nums;
	unsigned int i = 0;

	va_start(lst_nums, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(lst_nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(lst_nums);

}
