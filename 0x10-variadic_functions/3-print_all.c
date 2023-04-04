#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: type of arg to be passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *ch = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ch, va_arg(list, int));
					break;

				case 'i':
					printf("%s%d", ch, va_arg(list, int));
					break;

				case 'f':
					printf("%s%f", ch, va_arg(list, double));
					break;

				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ch, str);
					break;

				default:
					i++;
					continue;
			}
			ch = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
