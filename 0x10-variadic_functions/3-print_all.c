#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr_str, *separator = "";
	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lst, double));
					break;
				case 's':
					ptr_str = va_arg(lst, char *);
					if (ptr_str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s%s", separator, ptr_str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lst);
}
