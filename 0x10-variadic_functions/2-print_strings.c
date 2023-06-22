#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to this function
 * Return: strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr_str;
	va_list my_strings;

	va_start(my_strings, n);

	for (i = 0; i < n; i++)
	{
		ptr_str = va_arg(my_strings, char *);
		if (ptr_str == NULL)
			printf("(nil)");
		else
			printf("%s", ptr_str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_strings);
}
