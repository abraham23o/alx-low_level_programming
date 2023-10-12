#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of args passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arr_ch;

	va_start(arr_ch, n);

	for (i = 0; i < n; i++)
}
